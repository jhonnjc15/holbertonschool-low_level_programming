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
* leet - function that encodes a string into 1337.
* @s : a pointer parameter without name with a string as input
*
* Return: all the lowercase letters of a string to uppercase
* On error, -1 is returned, and errno is set appropriately.
*/

char *leet(char *s)
	{
	int length1;
	int length2;
	int i1;
	int i2;
	char vocales[5] = "aeotl";
	char  numeros[5] = "43071";

	length1 = _strlen(s);
	length2 = _strlen(vocales);
	for (i1 = 0 ; i1 < length1 ; i1++)
	{
		for (i2 = 0 ; i2 < length2 ; i2++)
		{
			if (s[i1] == vocales[i2] || s[i1] == vocales[i2] - 32)
			{
				s[i1] = numeros[i2];
				break;
			}
		}
	}
	return (s);
}
