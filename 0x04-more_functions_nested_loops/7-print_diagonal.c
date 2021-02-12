#include "holberton.h"

/**
 * print_diagonal - prints diagonal line
 * @n: length of line
 *
 **/

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x < y; x++)
		_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
