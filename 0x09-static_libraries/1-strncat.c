#include "holberton.h"

/**
 * _strncat - writes the character c to stdout
 * @dest: The string destin
 * @src: the string source
 * @n: number of characters to go through
 * Return: dest.
 **/
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		b++;
	}
	if (n > b)
	{
		n = b;
	}
	while (c < n)
	{
		dest[a] = src[c];
		c++;
		a++;
	}
	return (dest);
}
