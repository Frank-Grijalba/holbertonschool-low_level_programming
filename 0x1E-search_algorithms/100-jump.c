#include "search_algos.h"

/**
 *jump_search - Algorithm to find with jump search
 *@array: array for search
 *@size: size of the array
 *@value: is the value to search for
 *Return: the position of the found, else return -1
 */

int jump_search(int *array, size_t size, int value)
{
	if (array != NULL || size != 0)
	{
		size_t step = 0, prev = 0, i = 0;

		while (step < size && array[step] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", step, array[step]);
			prev = step;
			step += (int)(sqrt(size));
		}

		printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

		if (step > (size - 1))
			step = size - 1;
		for (i = prev; i <= step && array[i] <= value; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
