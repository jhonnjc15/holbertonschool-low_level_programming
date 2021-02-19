#include "holberton.h"

/**
* leet - function that encodes a string into 1337.
* @s : a pointer parameter without name with a string as input
*
* Return: all the lowercase letters of a string to uppercase
* On error, -1 is returned, and errno is set appropriately.
*/

char *leet(char *s)
	{
	int length;
	int i1;
	int i2;
	char vocales[5] = {'A', 'E', 'O', 'T', 'L'};
	char numeros[5] = {'4', '3', '0', '7', '1'};

	length = 5;
	i1 = 0;
	while (s[i1])
	{
		for (i2 = 0 ; i2 < length ; i2++)
		{
			if (s[i1] == vocales[i2] || s[i1] == vocales[i2] + 32)
			{
				s[i1] = numeros[i2];
			}
		}
		i1++;
	}
	return (s);
}
