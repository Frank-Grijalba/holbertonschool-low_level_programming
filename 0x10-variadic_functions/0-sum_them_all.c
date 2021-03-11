#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - Do an addition between n variables
 *@n: n variables
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;
	va_list ptrargs;

	if (n == 0)
		return (0);

	va_start(ptrargs, n);

	while (i < n)
	{
		sum = sum + va_arg(ptrargs, int);
		i++;
	}
	va_end(ptrargs);
	return (sum);
}
