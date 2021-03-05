#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenate two strings which contains s1, followed by
 *                 the first n bytes of s2, and null terminated
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes that will takes of the second string
 *Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{	size1++;
	}

	while (s2[size2] != '\0')
	{	size2++;
	}

	if (n > size2)
		n = size2;
	ptr = malloc((size1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';

	return (ptr);
}
