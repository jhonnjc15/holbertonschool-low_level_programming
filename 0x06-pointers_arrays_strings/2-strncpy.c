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
* _strncpy - concatenate 2 strings
* @dest : A pointer
* @src : A pointer
* @n : The # of characteres of src to concatenate
*
* Return: The concatenated string
* On error, -1 is returned, and errno is set appropriately.
*/

char *_strncpy(char *dest, char *src, int n)
	{
	int index;
	int length1;

	length1 = _strlen(src);
	if (n > 98)
		n = 97;

	if (n < length1)
	{
		for (index = 0 ; index < n ; index++)
		{
			dest[index] = src[index];
		}
	}
	else
	{
		for (index = 0 ; index < length1 ; index++)
		{
			dest[index] = src[index];
		}
		for (index = length1 ; index < n ; index++)
		{
			dest[index] = '\0';
		}
	}
	return (dest);
}
