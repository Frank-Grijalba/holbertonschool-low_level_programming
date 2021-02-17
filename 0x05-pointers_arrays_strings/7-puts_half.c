#include "holberton.h"

/**
 *puts_half - prints the second half of the string
 *@str: pointer type char
 **/

void puts_half(char *str)
{
	int length = 0;
	int div = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if ((length % 2) != 0)
	{
		div = (length - 1) / 2;
	}
	else if ((length % 2) == 0)
	{
		div = length / 2;
	}

	while (str[div] != '\0')
	{
		_putchar(str[div]);
		div++;
	}
	_putchar('\n');
}
