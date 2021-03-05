#include <stdio.h>
#include <stdlib.h>

/**
*longitud - Give us the length of a string
*@s: A char pointer string.
*Return: 1 if s is a palondrome, 0 if not.
*On error, -1 is returned, and errno is set appropriately.
*/

unsigned int longitud(char *s)
{
	if (!(*s))
		return (0);
	return (1 + longitud(s + 1));
}

/**
*string_nconcat - function to concatenate two strings with n bytes in second
*@s1:First string
*@s2:Second string
*@n:The number of bytes used in s2
*Return: the new concatenate string
*On error, -1 is returned, and errno is set appropriately.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc_string;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= longitud(s2))
		n = longitud(s2);
	conc_string = malloc(sizeof(char) * (longitud(s1) + n) + 1);
	if (conc_string == NULL)
		return (NULL);
	for (i = 0; i < longitud(s1) ; i++)
	{
		conc_string[i] = s1[i];
	}
	for (i = 0; i < n ; i++)
	{
		conc_string[i + longitud(s1)] = s2[i];
	}
	conc_string[longitud(s1) + n] = '\0';
	return (conc_string);
}
