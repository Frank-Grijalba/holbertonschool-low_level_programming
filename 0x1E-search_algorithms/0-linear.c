#include "search_algos.h"
/**
 *linear_search - Algorithm to find a linear search
 *@array: array for search
 *@size: size of the array
 *@value: is the value to search for
 *Return: the position of the found, else return -1
 */
int linear_search(int *array, size_t size, int value)
{
	if (array != NULL || size != 0)
	{
		size_t i = 0;

		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
