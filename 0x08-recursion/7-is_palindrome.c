#include "holberton.h"

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

	contador = 0;
	while (s[contador] != '\0')
	{
		contador++;
	}
	if (s[0] == '\0' || contador == 1)
		return (1);
	return (compare(s, 0, contador - 1));
}
