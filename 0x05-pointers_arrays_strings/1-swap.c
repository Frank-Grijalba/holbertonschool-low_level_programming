#include "holberton.h"
/**
 *swap_int - swap values of variables a and b
 *
 *@a: pointer to the value of a
 *@b: pointer to the value of b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
