#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - print the content of the array
 *@array: is the pointer to the array
 *@size: size of array
 *@action: is the function as parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
