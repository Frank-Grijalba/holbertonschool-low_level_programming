#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of the array
 * @size: size of array
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
	{
		ptr[a] = 0;
	}
	return (ptr);
}
