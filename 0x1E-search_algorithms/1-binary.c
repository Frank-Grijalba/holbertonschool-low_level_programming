#include "search_algos.h"
/**
 *binary_search - Algorithm to find a binary search
 *@array: array for search
 *@size: size of the array
 *@value: is the value to search for
 *Return: the position of the found, else return -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array != NULL || size != 0)
	{
		int i = 0;
		int low_index = 0;
		int high_index = size - 1;
		int middle = 0;

		while (low_index <= high_index)
		{
			printf("Searching in array: ");
			for (i = low_index; i < high_index; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			middle = (int)((low_index + high_index) / 2);
			if (value < array[middle])
				high_index = middle - 1;
			else if (value > array[middle])
				low_index = middle + 1;
			else
				return (middle);
		}
	}
	return (-1);
}
