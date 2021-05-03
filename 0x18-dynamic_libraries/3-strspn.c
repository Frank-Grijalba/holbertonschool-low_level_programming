#include "holberton.h"

/**
 * _strspn - count
 * @s:pointer dst
 * @accept:pointer src
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{	unsigned int count = 0;
	int a = 0, b = 0, c = 0;

	while (accept[b] != '\0')
	{
		b++;
	}

	while (s[a] != '\0')
	{
		for (c = 0; c < b; c++)
		{
			if (s[a] == accept[c])
			{
				count++;
				break;
			}
		}
			if (accept[c] == '\0')
			{
				return (count);
			}
	a++;
	}

	return (count);
}
