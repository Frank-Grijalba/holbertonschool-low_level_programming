#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar (n);
		n++;
	}
	putchar('\n');
	return (0);
}
