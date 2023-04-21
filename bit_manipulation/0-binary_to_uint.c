#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is a constant pointer to a string (the binary number to convert)
 *
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int bit = 1;
int i;
if (b == NULL)
return (0);
for (i = strlen(b) - 1; i >= 0; i--)
{
if (b[i] == '1')
result += bit;
else if (b[i] != '0')
return (0);
bit <<= 1;
}
return (result);
}

