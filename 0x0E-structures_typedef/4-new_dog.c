#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* _strcpy - print n characters of a array
* @dest : pointer array
* @src : the number of elements to print
*
* Return: dest
* On error, -1 is returned, and errno is set appropriately.
*/

char *_strcpy(char *dest, char *src)
	{
	int index;

	for (index = 0 ; src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = src[index];
	return (dest);
}
/**
*new_dog - function to allocate memory using malloc.
*@name: the name of the dog
*@age: the age of the dog
*@owner: the owner of the dog
*Return: the structure initialized
*On error, -1 is returned, and errno is set appropriately.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nuevo;

	nuevo = malloc(sizeof(dog_t));
	if (nuevo  == NULL)
		return (NULL);
	nuevo->name = name;
	nuevo->age = age;
	nuevo->owner = owner;
	return (nuevo);
}
