#include "holberton.h"
/**
 *_memset - fills memory with a constant byte
 *@s: pointer to memory
 *@b: constant byte used to fill memory in s
 *@n: number of bytes to used
 *Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
