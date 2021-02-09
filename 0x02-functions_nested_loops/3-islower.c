#include "holberton.h"

/**
 *_islower - check if parameter 'c' is lower
 *@c: is entry point
 *Return: 1
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
