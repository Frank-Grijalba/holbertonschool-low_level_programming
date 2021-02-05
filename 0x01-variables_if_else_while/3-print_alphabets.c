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
	char chmin = 'a';
	char chmay = 'A';

	while (chmin <= 'z')
	{
		putchar (chmin);
		chmin++;
	}

	while (chmay <= 'Z')
	{
		putchar (chmay);
		chmay++;
	}
	putchar('\n');
	return (0);
}
