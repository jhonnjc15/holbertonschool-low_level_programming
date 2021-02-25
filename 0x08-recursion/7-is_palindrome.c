#include "holberton.h"

/**
*longitud - Give us the length of a string
*@s: A char pointer string.
*Return: 1 if s is a palondrome, 0 if not.
*On error, -1 is returned, and errno is set appropriately.
*/

int longitud(char *s)
{
	if (!(*s))
		return (0);
	return (1 + longitud(s + 1));
}

/**
*compare - A compare function
*@s: A char pointer string.
*@Inicio: A char pointer string.
*@Fin: A char pointer string.
*Return: 1 if s is a palondrome, 0 if not.
*On error, -1 is returned, and errno is set appropriately.
*/

int compare(char *s, int Inicio, int Fin)
{
	if (Inicio >= Fin)
		return (1);
	if (s[Inicio] == s[Fin])
	{
		return (compare(s, Inicio + 1, Fin - 1));
	}
	else
		return (0);
}

/**
*is_palindrome- A palindrome function.
*@s: A char pointer string.
*Return: 1 if s is a palondrome, 0 if not.
*On error, -1 is returned, and errno is set appropriately.
*/

int is_palindrome(char *s)
{
	int contador;

	contador = longitud(s);
	if (s[0] == '\0' || contador == 1)
		return (1);
	return (compare(s, 0, contador - 1));
}
