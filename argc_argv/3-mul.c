#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])

{
	if(3 == argc)

	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
	else
	printf("ERROR\n");
	return (1);
}
