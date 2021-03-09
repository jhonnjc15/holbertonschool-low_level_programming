#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*free_dog - function to allocate memory using malloc.
*@d: the na
*Return: the structure initialized
*On error, -1 is returned, and errno is set appropriately.
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
