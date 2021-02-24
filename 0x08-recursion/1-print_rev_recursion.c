#include "holberton.h"

/**
*_print_rev_recursion - This function prints a string in reverse.
*@s: A char pointer string
*Return: the printed string
*On error, -1 is returned, and errno is set appropriately.
*/

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	_print_rev_recursion(&s[1]);
	_putchar (s[0]);
}
