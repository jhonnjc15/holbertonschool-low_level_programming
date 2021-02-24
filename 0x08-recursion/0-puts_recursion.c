#include "holberton.h"

/**
*_puts_recursion - This function prints a string.
*@s: A char pointer string
*Return: the printed string
*On error, -1 is returned, and errno is set appropriately.
*/

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (s[0]);
	_puts_recursion(&s[1]);
}
