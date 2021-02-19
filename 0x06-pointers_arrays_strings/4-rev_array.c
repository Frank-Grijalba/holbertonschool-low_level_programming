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
	int i, temp;

	i = 0;

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
