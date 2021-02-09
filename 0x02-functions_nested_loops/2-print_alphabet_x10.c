#include "holberton.h"

/**
 * print_alphabet_x10 - prints char a to z ten times in a new line.
 *
 * No return values
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
		}
		_putchar('\n');
		i++;
	}
}
