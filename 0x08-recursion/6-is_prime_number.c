#include "holberton.h"
/**
 * prime_con - determine if n is a prime
 * @n: asad
 * @i: dsad
 *
 * Return: 1(true) , 0(false)
 */
int prime_con(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		if (n >= (i + 1) * (i * 1))
		return (prime_con(n, i + 1));
	}
	return (1);
}

/**
 *is_prime_number - determine if n is a prime
 *@n: nnnnn
 *Return: 1(true) , 0(false)
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_con(n, 2));
}
