#include "holberton.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments
 * @ac: Integer count
 * @av: Array char
 * Return: pointer or null
 */

char *argstostr(int ac, char **av)
{
	char *s;

	if (ac == 0 || av == NULL)
	{
		return ('\0');
	}

	s = malloc(ac * sizeof(char));

	if (s == NULL)
	{
		return ('\0');
	}
	else
	{
		return (s);
	}
}
