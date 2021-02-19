#include "holberton.h"

/**
 * _strcmp - writes the character c to stdout
 * @s1: The character to print
 * @s2: The character to print
 * Return: int.
 **/
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
	{
		a++;
	}

	return (s1[a] - s2[a]);
}

