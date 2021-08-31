#include "search_algos.h"

/**
 *interpolation_search - Algorithm to find with a formula:
 *position = start+((end-start/array[end]-array[start])*(value-array[start]))
 *@array: array for search
 *@size: size of the array
 *@value: is the value to search for
 *Return: the position of the found, else return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array != NULL || size != 0)
	{
	int start = 0, end = 0, position = 0;

		end = size - 1;
		while (start <= end && value >= array[start])
		{
			position = start + (((double)(end - start) /
			(array[end] - array[start])) * (value - array[start]));
			if (position > end)
			{
				printf("Value checked array[%d] is out of range\n", position);
				break;
			}
			printf("Value checked array[%d] = [%d]\n", position, array[position]);

			if (array[position] == value)
				return (position);
			if (value > array[position])
				start = position + 1;
			else
				end = position - 1;
		}
	}
	return (-1);
}
