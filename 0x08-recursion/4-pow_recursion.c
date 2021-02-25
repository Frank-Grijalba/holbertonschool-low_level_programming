#include "holberton.h"

/**
 * _pow_recursion - return power of x like a base and y like a pow
 *
 * @x: Base
 * @y: Exp
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
