#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet
 * @void: The character to print
 *
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
	{
	char letras;
	int contador;

	for (contador = 0; contador <= 9; contador++)
		{
		for (letras = 'a'; letras <= 'z'; letras++)
			{
			_putchar(letras);
		}
		_putchar('\n');
	}
}
