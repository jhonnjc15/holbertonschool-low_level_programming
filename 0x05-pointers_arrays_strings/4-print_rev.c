#include "holberton.h"
#include "2-strlen.c"
/**
* print_rev - print a string in reverse
* @s : A pointer string to print
*
* Return: the string in reverse
* On error, -1 is returned, and errno is set appropriately.
*/

void print_rev(char *s)
	{
	int index, i;
	int length;

	index = 0;
	length = _strlen(s);
	for (i = length - index ; i >= 0 ; i--)
	{
		_putchar(s[i]);
		index++;
	}
	_putchar('\n');
}
