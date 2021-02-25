#include "holberton.h"
#include <stdio.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * * @n: int
 * @a: int
 * Return: On success 1.
 **/

int recorrer(int n, int a);
int _sqrt_recursion(int n)
{
	return (recorrer(n, 1));
}
/**
 * recorrer - this is the function that increment
 * @n: int
 * @a: int
 * Return: int 1 or -1.
 **/
	int recorrer(int n, int a)
	{
		if (a * a == n)
		{
			return (a);
		}
		else if (a * a > n)
		{
			return (-1);
		}
		else
		{
			return (recorrer(n, a + 1));
		}
	}
