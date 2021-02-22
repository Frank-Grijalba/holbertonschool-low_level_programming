#include "holberton.h"
/**
 *_memcpy - fills memory with a constant byte
 *@dest: pointer to memory
 *@src: pointer source
 *@n: number of bytes to used
 *Return: pointer to memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == 5)
			dest[i] = src[i + 1];
		else
			dest[i] = src[i];
	}
	return (dest);
}
