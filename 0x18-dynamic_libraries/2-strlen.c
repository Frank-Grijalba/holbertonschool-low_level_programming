#include "holberton.h"

/**
 *_strlen - Change the variable "n" in the main to the value 98.
 *
 * @s:is the pointer.
 * Return: longitud
 */
int _strlen(char *s)
{
	int longitud = 0;

	while (*s != '\0')
	{
		longitud++;
		s++;
	}
	return (longitud);
}
