#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenate two strings which contains s1, followed by
 *                 the first n bytes of s2, and null terminated
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes that will takes of the second string and then append
 *    to the first string
 *Return: array two dimentions, NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	unsigned int long1 = 0;
	unsigned int long2 = 0;
	unsigned int i, j;

	if (s1 == '\0')
	s1 = "";

	if (s2 == '\0')
	s2 = "";

	while (s1[long1] != '\0')
		long1++;

	while (s1[long2] != '\0')
		long2++;

	if (n >= long2)
		str = malloc(sizeof(char) * (long1 + long2) + 1);
	else
		str = malloc(sizeof(char) * (long1 + n) + 1);

	if (str == '\0')
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
	{	str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{	str[i] = s2[j];
		i++;
	}
		str[i] = '\0';
		return (str);
}
