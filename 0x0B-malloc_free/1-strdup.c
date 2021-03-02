#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - create a copy of string
 *@str: string to copy
 *Return: pointer to Array, NULL if string is empty
 */
char *_strdup(char *str)
{
	char *chr;
	unsigned int n;
	unsigned int length = sizeof(str);

	if (str == NULL)
	{
		return (NULL);
	}

	chr = malloc(sizeof(char) * length + 1);

	if (chr == NULL)
	{
		return (NULL);
	}

	else
	{
		for (n = 0; str[n] != '\0'; n++)
		{
			chr[n] = str[n];
		}
	}
	chr[n] = '\0';
	return (chr);
}
