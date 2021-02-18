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
* cap_string - function that capitalizes all words of a string.
* @s : a pointer parameter without name
*
* Return: all the lowercase letters of a string to uppercase
* On error, -1 is returned, and errno is set appropriately.
*/

char *cap_string(char *s)
	{
	int length1;
	int index;

	length1 = _strlen(s);
	for (index = 0 ; index < length1 ; index++)
	{
		if ((s[index] == 44 || s[index] == 59 || s[index] == 46
			|| s[index] == 33 || s[index] == 63 || s[index] == 34
			|| s[index] == 40 || s[index] == 41 || s[index] == 123
			|| s[index] == 125 || s[index] == '\t' || s[index] == '\n'
			|| s[index] == ' ') && (index != length1 - 1)
			&& (s[index + 1] >= 97 && s[index + 1] <= 122))
		{
			s[index + 1] =  s[index + 1] - 32;
		}
	}
	return (s);
}
