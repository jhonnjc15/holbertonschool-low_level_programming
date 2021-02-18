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
* puts_half - print a only half of a string
* @str : A pointer string to print
*
* Return: the half of a string
* On error, -1 is returned, and errno is set appropriately.
*/

void puts_half(char *str)
	{
	int i;
	int length, n;

	length = _strlen(str);
	if (length % 2 == 0)
	{
		n = length / 2;
		for (i = length - n ; i < length ; i++)
		{
			_putchar(str[i]);
			n--;
		}
	}
	else
	{
		n = (length - 1) / 2;
		for (i = length - n ; i < length ; i++)
		{
			_putchar(str[i]);
			n--;
		}
	}
	_putchar('\n');
}
