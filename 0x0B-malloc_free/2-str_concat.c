#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: one string
 **/

char *str_concat(char *s1, char *s2)
{
	char *chr;
	unsigned int i, j;
	unsigned int length1 = sizeof(s1);
	unsigned int length2 = sizeof(s2);

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	chr = malloc(sizeof(char) * (length1 + length2) + 1);

	if (chr == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			chr[i] = s1[i];
		}

		for (j = 0; s2[j] != '\0'; j++)
		{
			chr[i] = s2[j];
			i++;
		}
	chr[i] = '\0';
	return (chr);
	}
}
