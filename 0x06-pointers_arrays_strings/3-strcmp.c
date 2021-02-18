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
* _strcmp - function to compare two strings
* @s1 : A pointer
* @s2 : A pointer
*
* Return: The concatenated string
* On error, -1 is returned, and errno is set appropriately.
*/

int _strcmp(char *s1, char *s2)
	{
	int length1, length2;
	int index, maxi;
	int diferencia;

	diferencia = 0;
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	if (length1 >= length2)
		maxi = length1;
	else
		maxi = length2;

	for (index = 0 ; index < maxi ; index++)
	{
		if (s1[index] != s2[index])
		{
			diferencia = s1[index] - s2[index];
			break;
		}
	}
	return (diferencia);
}
