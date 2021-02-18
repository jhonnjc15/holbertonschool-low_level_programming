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
* _strcat - concatenate 2 strings
* @dest : A pointer
* @src : A pointer
*
* Return: The concatenated string
* On error, -1 is returned, and errno is set appropriately.
*/

char *_strcat(char *dest, char *src)
	{
	int index;
	int length1;
	int i;

	length1 = _strlen(dest);
	i = 0;
	for (index = length1 ; src[i] != '\0' ; index++)
	{
		dest[index] = src[i];
		i++;
	}
	dest[index] = src[index];
	return (dest);
}
