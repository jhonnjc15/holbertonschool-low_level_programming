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
	int length, i;
	char tmp;

	length = _strlen(s) - 1;
	for  (i = 0 ; i < length; i++)
	{
		tmp = s[i];
		s[i] = s[length];
		s[length] = tmp;
		length--;
	}
}
