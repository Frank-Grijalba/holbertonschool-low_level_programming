#include "holberton.h"

/**
 * b_print - prints the binary, using the recursive form.
 * @n: base 10 number
 */
void b_print(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
		b_print(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - Print the binary representation of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	b_print(n);
}
