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
* string_toupper - function that changes all lowercase letters to uppercase.
* @s : a pointer parameter without name
*
* Return: all the lowercase letters of a string to uppercase
* On error, -1 is returned, and errno is set appropriately.
*/

char *string_toupper(char *s)
	{
	int length1;
	int index;

	length1 = _strlen(s);
	for (index = 0 ; index < length1 ; index++)
	{
		if (s[index] >= 97 && s[index] <= 122)
		{
			s[index] = s[index] - 32;
		}
	}
	return (s);
}
