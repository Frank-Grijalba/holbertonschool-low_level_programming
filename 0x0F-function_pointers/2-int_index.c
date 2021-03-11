#include "function_pointers.h"

/**
 *int_index - print the content of the array
 *@array: is the pointer to the array
 *@size: size of array
 *@cmp: is the pointer to the function as parameter
 *Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
