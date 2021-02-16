#include "holberton.h"

/**
 *puts2 - prints every other character of a string, starting with the first
 *        character, followed by a new line
 *@str: pointer type char
 **/

void puts2(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		if ((length % 2) == 0)
			_putchar(*str);
		length++;
		str++;
	}
	_putchar('\n');
}
