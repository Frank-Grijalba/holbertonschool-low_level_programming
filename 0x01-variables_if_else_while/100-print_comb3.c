#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int c = 49, a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = c; b < 58; b++)
		{
			putchar (a);
			putchar (b);
			if (a == 56 && b == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		} c++;
	}
	return (0);
}
