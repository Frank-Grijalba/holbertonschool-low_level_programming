#ifndef DOG
#define DOG

#include <stdlib.h>
#include <stdio.h>

/**
*struct dog - define a dog
*@name: name
*@age: age
*@owner: owner
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
