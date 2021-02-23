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
*_strstr - fill the first n bytes of the memory area with a constant b
*@haystack: A char pointer
*@needle: A char pointer
*Return: the modify pointer dest
*On error, -1 is returned, and errno is set appropriately.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, k, contador;
	int length;

	length = _strlen(needle);
	i = 0;
	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		if (haystack[i] == needle[0])
		{
			contador = 0;
			for (k = 0 ; k < length ; k++)
			{
				if (haystack[k + i]  == needle[k])
					contador++;
			}
			if (contador == length)
			{
				return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
