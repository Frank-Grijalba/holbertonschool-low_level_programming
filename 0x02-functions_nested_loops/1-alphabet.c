#include "holberton.h"

/**
 * print_alphabet - prints char a to z.
 *
 * No return values
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
