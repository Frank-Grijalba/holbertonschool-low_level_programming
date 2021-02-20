#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - kjhkjhkjhkjh
 * @c: fdfgdfg
 * Return: nothing
 **/

char *cap_string(char *c)
{
	int y = 0, w = 0, x = 0;
	char b[] = {" \t\n,;.\"!?(){}"};

	while (c[y] !=  '\0')
	{
		if (y == 0 && c[y] >= 'a' && c[y] <= 'z')
		{
			c[0] -= 32;
		}
		for (x = 0; x <= 12; x++)
		{
			if (c[y] == b[x])
			{
				w = y + 1;
				if (c[w] >= 'a' && c[w] <= 'z')
					c[w] -= 32;
			}
			else
			{
				continue;
			}
		}
		y++;
	}
	return (c);
}
