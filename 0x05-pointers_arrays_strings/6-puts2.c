#include "holberton.h"

/**
* _strlen- calculate the length of a string
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
* puts2 - print the even caracters of a string
* @str : A pointer string to reverse
*
* Return: the string in reverse
* On error, -1 is returned, and errno is set appropriately.
*/

void puts2(char *str)
	{
	int i;
	int length;

	length = _strlen(str);
	for (i = 0  ; i < length ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
