#include "holberton.h"

/**
 * rev_string - writes the string in reverse
 * @s: The character to print
 *
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char temp;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; b <= a ; a--, b++)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;
	}
}
