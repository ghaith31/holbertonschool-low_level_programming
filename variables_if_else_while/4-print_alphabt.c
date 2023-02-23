#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
*
* Return: 0
**/

int main(void)
{
	char NUM;

	for (NUM = 'a'; NUM <= 'z'; NUM++)
		if (NUM != 'e' && NUM != 'q')
			putchar(NUM);
	putchar('\n');

	return (0);
}
