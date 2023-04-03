#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: pointer
* Return: string converted to int
*/

int _atoi(char *s)
{
	int i = 0, j, din;
	int sign = 1, bdet = 0, wfet = 0, bdina = 0, out = 0;

	while (s[i] != '\0')
	{
		if (bdina != 0)
		{
			if ((s[i] - '0' < 0) || (s[i] - '0' > 9))
			{
				wfet = i - 1;
				break;
			}
		}
		else
		{
			if (s[i] == '-')
				sign *= -1;
			if ((s[i] - '0' >= 0) && (s[i] - '0' <= 9))
			{
				bdina = 1;
				bdet = i;
			}
		}
		i++;
	}
	wfet = (wfet == 0) ? i - 1 : wfet;
	if (bdina)
	{
		for (i = bdet; i <= wfet; i++)
		{
			din = 1;
			for (j = 0; j < (wfet - i); j++)
				din *= 10;
			out += din * (s[i] - '0');
		}
	}
	return (out *= sign);
}
