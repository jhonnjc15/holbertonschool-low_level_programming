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
* rev_string - reverse a string in reverse
* @s : A pointer string to reverse
*
* Return: the string in reverse
* On error, -1 is returned, and errno is set appropriately.
*/

void rev_string(char *s)
	{
	int index, i;
	int length;

	index = 0;
	length = _strlen(s);

	char new_string[length];

	for (i = length - index - 1  ; i >= 0 ; i--)
	{
		new_string[index] = s[i];
		index++;
	}

	for (i =  0  ; i < length ; i++)
	{
		s[i] = new_string[i];
	}
}
