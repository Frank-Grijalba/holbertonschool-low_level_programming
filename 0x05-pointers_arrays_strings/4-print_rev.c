#include "holberton.h"

/**
 *print_rev - print a string in reverse.
 *
 * @s:is the pointer.
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (l = l - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
