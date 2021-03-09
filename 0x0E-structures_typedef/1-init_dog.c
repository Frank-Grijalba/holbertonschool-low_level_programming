#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - init a structure of dog type
 *@d: variable dog type
 *@name: name
 *@age: age
 *@owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
