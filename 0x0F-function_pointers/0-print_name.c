#include "function_pointers.h"

/**
 *print_name - prints a name
 *@name: name to be prited
 *@f: pointer to the function that will be used with name
 *void (*f)(char *)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
