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
	char NUM, num;

	for (NUM = 'a'; NUM <= 'z'; NUM++)
		putchar(NUM);
	for (num = 'A'; num <= 'Z'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
