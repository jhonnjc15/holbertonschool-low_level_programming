#include "holberton.h"

/**
* swap_int - print the alphabet
* @a : A pointer
* @b : A pointer
*
* Return: the new value of the input parameter
* On error, -1 is returned, and errno is set appropriately.
*/

void swap_int(int *a, int *b)
	{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
