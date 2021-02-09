#include "holberton.h"

/**
 * print_alphabet - print the alphabet
 * @void: The character to print
 *
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
	{
	char letras;

	for (letras = 'a'; letras <= 'z'; letras++)
		{
		_putchar(letras);
	}
	_putchar('\n');
}
