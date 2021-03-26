#include "holberton.h"
/**
 * flip_bits - count the number of bits to flip to get
 * from one number to another.
 * @n: base 10 number
 * @m: base 10 number
 * Return: the number of bits given from the main
 * to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;

	if (n == 0 && m == 0)
	{
		return (0);
	}
	x = x + flip_bits(n >> 1, m >> 1);
	if ((n & 1) != (m & 1))
	{
		x++;
	}
	return (x);
}
