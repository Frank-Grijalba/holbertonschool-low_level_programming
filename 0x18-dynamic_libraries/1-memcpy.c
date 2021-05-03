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
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
