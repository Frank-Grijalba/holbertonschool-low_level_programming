#include "holberton.h"

/**
 *_isupper - check if parameter 'c' is Upper case
 *@c: is entry point
 *Return:0 or 1
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
