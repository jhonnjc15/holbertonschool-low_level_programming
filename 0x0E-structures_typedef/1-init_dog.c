#include <stdio.h>
#include "dog.h"
/**
*init_dog - function to allocate memory using malloc.
*@d: The structure
*@name: the name of the dog
*@age: the age of the dog
*@owner: the owner of the dog
*Return: the structure initialized
*On error, -1 is returned, and errno is set appropriately.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
