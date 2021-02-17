#include "holberton.h"

/**
* _puts - print the alphabet
* @str : A pointer string to print
*
* Return: the string.
* On error, -1 is returned, and errno is set appropriately.
*/

void _puts(char *str)
	{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
