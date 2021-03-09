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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
dog_t *new_dog(char *name, float age, char *owner);

#endif
