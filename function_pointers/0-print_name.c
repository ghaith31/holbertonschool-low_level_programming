#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print the name
 * @name: name to print
 * @f: fanction to use
 *
 */

void print_name(char *name, void (*f)(char *))

{
	if(name && f != NULL)

	f(name);
}
