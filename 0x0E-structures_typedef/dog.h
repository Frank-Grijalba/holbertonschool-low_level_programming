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

typedef struct dog
{
char *name;
float age;
char *owner;
} my_dog;

#endif
