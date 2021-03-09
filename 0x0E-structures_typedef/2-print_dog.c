#include <stdio.h>
#include "dog.h"
/**
*print_dog - function to print the structure
*@d: The structure
*Return: nothing
*On error, -1 is returned, and errno is set appropriately.
*/

void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("(nil)\n");
	}
	if (d->age)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("(%d\n", 0);
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("(nil)\n");
	}
}
