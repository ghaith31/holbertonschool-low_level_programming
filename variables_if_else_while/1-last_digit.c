#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
*
* Return: always 0
**/

int main(void)
{
	int n, L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = (n % 10);
	printf("Last digit of %i is %i ", n, L);
	if (L == 0)
		printf("and is 0\n");
	else if (L > 5)
		printf("and is greater than 5\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
