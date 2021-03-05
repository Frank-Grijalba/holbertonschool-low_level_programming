#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenate two strings which contains s1, followed by
 *                 the first n bytes of s2, and null terminated
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes that will takes of the second string and then append
 *    to the first string
 *Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	unsigned int long1 = 0;
	unsigned int long2 = 0;
	unsigned int i;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[long1] != '\0')
		long1++;

	while (s1[long2] != '\0')
		long2++;

	if (n >= long2)
		str = malloc(sizeof(char) * (long1 + long2) + 1);
	else
		str = malloc(sizeof(char) * (long1 + n) + 1);

	if (str == NULL)
		return (0);

	for (i = 0; i < long1; i++)
	{    str[i] = s1[i];
	}
	for (; i < (long1 + n); i++)
	{    str[i] = s2[i - long1];
	}
	str[i] = '\0';
	return (str);
}
