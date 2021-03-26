#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: base 10 number
 * @index: index to insert
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int d;

	if (index < (8 * sizeof(unsigned long int)))
	{
		d = 1 << index;
		d = ~d;
		*n = *n & d;
		return (1);
	}
	else
	{
	return (-1);
	}
}
