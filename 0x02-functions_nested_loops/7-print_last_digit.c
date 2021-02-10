#include "holberton.h"

/**
 *print_last_digit - print the last number of n
 *@n: is entry point
 *Return: 0
 **/
int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
	{
		_putchar('0' + (-1 * x));
		return (-1 * x);
	}
	else
	{
		_putchar('0' + x);
		return (x);
	}
}
