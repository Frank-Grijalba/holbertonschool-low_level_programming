#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - writes the character c to stdout
 * @a: The pointer to the array
 * @n: the longth of the array
 * Return: nothing
 **/
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i < n && i > -1)
	{
		if (i != 0)
		{
		printf("%d, ", a[i]);
		}
		else
		{
		printf("%d", a[i]);
		}
		i--;
	}
	printf("\n");
}
