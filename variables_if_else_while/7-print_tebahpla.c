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

	for (NUM = 'z'; NUM >= 'a'; NUM--)
		putchar(NUM);
	putchar('\n');

	return (0);
}
