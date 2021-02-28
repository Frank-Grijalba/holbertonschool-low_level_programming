#include "holberton.h"

/**
 * _strcpy - writes the character c to stdout
 * @dest: The array dest
 * @src: the array source
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{

	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
