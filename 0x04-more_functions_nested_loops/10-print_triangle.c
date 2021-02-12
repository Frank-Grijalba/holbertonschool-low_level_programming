#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: demensions of triangle
 * Return: nothing
 **/
void print_triangle(int size)
{

	int enter, limite;
	int contmenos = size;

	for (enter = 0; enter < size; enter++)
	{
		if (size > 0)
		{
		for (limite = 0; limite < size; limite++)
		{
			if (limite < contmenos - 1)
			{
				_putchar (' ');
			}
			else
			{
				_putchar ('#');
			}
		}
		_putchar('\n');
		contmenos--;
	}
	else
	{
		_putchar ('\n');
	}
	}
	_putchar ('\n');
}
