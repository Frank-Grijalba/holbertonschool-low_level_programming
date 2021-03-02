#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - create a copy of string
 *@str: string to copy
 *Return: pointer to Array, NULL if value is 0
 */
char *_strdup(char *str)
{
	char *chr;
	unsigned int n;
	unsigned int length = sizeof(str);

	chr = malloc(sizeof(char) * length);

	if (chr == NULL)
	{
		return (NULL);
	}

	else
	{
		for (n = 0; n <= length; n++)
		{
			chr[n] = str[n];
		}
	}
	return (chr);
}
