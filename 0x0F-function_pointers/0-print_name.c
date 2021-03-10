#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - function print a name using a pointer to function
*@name: The structure
*@f: the name of the dog
*Return: Nothing
*On error, -1 is returned, and errno is set appropriately.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(*f)(name);
	}
}
