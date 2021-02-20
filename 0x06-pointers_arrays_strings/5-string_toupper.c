#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - writes the string and convert to UPPER
 * @s: The string
 * Return: nothing
 **/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
