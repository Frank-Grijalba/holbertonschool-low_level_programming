#include "holberton.h"

/**
 *puts_half - prints the second half of the string
 *@str: pointer type char
 **/

void puts_half(char *str)
{
	int length = 0;
	int div = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if ((length % 2) != 0)
	{
		div = (length - 1) / 2;
	}
	else
	{
		div = length / 2;
	}

	for (i = div; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
