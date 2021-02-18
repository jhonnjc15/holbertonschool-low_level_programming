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
* _strncat - concatenate 2 strings
* @dest : A pointer
* @src : A pointer
* @n : The # of characteres of src to concatenate
*
* Return: The concatenated string
* On error, -1 is returned, and errno is set appropriately.
*/

char *_strncat(char *dest, char *src, int n)
	{
	int index;
	int length1, length2;
	int i;

	length1 = _strlen(dest);
	length2 = _strlen(src);
	i = 0;
	if (n > 98)
		n = 97;
	for (index = length1 ; i < n ; index++)
	{
		dest[index] = src[i];
		i++;
	}
	if (length2 < n)
		dest[index] = src[length2];

	return (dest);
}
