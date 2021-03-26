#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: A string of 0 and 1 chars
 * Return: The converted number if successful, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0, base = 1, j = 0;
unsigned int convert = 0;


	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		i++;
	}

	i--;

	for (j = i; j >= 0; j--)
	{
		if (b[j] == '1')
		{
			convert += base;
		}

		base = base * 2;
	}
	return (convert);
}
