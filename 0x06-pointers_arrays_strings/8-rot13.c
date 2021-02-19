#include "holberton.h"

/**
* rot13 - function that encodes a string into rot13.
* @s : a pointer parameter without name with a string as input
*
* Return: all the lowercase letters of a string to uppercase
* On error, -1 is returned, and errno is set appropriately.
*/

char *rot13(char *s)
	{
	int length;
	int i1;
	int i2;
	char primera[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char segunda[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	length = 52;
	i1 = 0;
	while (s[i1])
	{
		for (i2 = 0 ; i2 < length ; i2++)
		{
			if (s[i1] == primera[i2])
			{
				s[i1] = segunda[i2];
				break;
			}
		}
		i1++;
	}
	return (s);
}
