#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocates memory blocks using malloc
 *@b: mem required
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (b <= 0)
		exit(98);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
