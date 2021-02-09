#include "holberton.h"

/**
 *print_sign - check if is positive or negative or 0
 *@c: is entry point
 *Return: 1
 **/
int print_sign(int c)
{
	if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		if (c == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('+');
			return (1);
		}
	}
}
