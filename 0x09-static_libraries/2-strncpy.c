#include "holberton.h"

/**
 * _strncpy - writes the character c to stdout
 * @dest: pointer to destiny
 * @src : pointer to source
 * @n: int n
 * Return: On success 1.
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
