#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog - new dog user
 *@name: pointer to dog´s name
 *@age: variable with dog´s age
 *@owner: pointer to owner´s name
 *Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *newd;

	while (name[i + 1])
		i++;

	while (owner[j + 1])
		j++;

	newd = malloc(sizeof(dog_t));

	if (newd == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->name = malloc(i * sizeof(newd->name));
	if (newd->name == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		newd->name[k] = name[k];
	newd->age = age;

	newd->owner = malloc(j * sizeof(newd->owner));

	if (newd->owner == NULL)
	{
		free(newd->owner);
		free(newd->name);
		free(newd);
		return (NULL);
	}

	for (k = 0; k <= j; k++)
		newd->owner[k] = owner[k];
	return (newd);
}
