#include "holberton.h"

/**
* _strlen- print the alphabet
* @s : A pointer to get the length of the string
*
* Return: the new value of the input parameter
* On error, -1 is returned, and errno is set appropriately.
*/

int _strlen(char *s)
	{
	int contador;

	contador = 0;
	while (s[contador] != '\0')
	{
		contador++;
	}
	return (contador);
}

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
	for (i = length - index - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
		index++;
	}
	_putchar('\n');
}
