#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - create an array of char
 *@size: size of array
 *@c: character to print "size" times
 *Return: pointer to Array, NULL if value is 0
 */
char *create_array(unsigned int size, char c)
{

	char *chr;
	unsigned int n;

	if (size <= 0)
	{
		return (NULL);
	}

	chr = malloc(sizeof(char) * size);

	if (chr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			chr[n] = c;
		}
	}
	return (chr);
}
