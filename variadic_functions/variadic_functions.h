#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);







/**
 * struct op - struct for 3
 * @c: character to check
 * @f: function to point to
 */

typedef struct op
{
	char *c;
	int (*f)(va_list a);
} printer;
#endif
