#include "holberton.h"

/**
 * _strstr - compares two strings
 * @haystack: source string
 * @needle: string being compared
 * Description: checks if needle is at start of haystack
 * Return: 1 if matches, 0 if not
 **/

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0, cont = 0;

	while (needle[a] != '\0')
	{
		a++;
	}
	while (haystack[b] != '\0')
	{
		for (c = 0; c < a; a++)
		{
			if (haystack[b] == needle[c])
			{
				cont++;
				if (cont == a)
				{
					b = b - a;
					return (b + a);
			}
			else
			{
				cont = 0;
			}
		}
	}
}
