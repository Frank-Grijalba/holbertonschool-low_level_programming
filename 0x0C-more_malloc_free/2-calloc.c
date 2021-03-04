#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements of the array
 * @size: size of array
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = 0;

		return (ptr);
	}
}
