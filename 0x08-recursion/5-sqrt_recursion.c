#include "holberton.h"

/**
* raiz - Funcion to calculate the square root
*@n: The number
*@i: The number to change while compare with the real number
*Return: 1 if the number is prime, 0 if not
*On error, -1 is returned, and errno is set appropriately.
*/

int raiz(int n, int i)
{
	if (n >= 1 && i > 0)
	{
		if (i * i == n)
		{
			return (i);
		}
		return (raiz(n, i - 1));
	}
	else
		return (-1);
}

/**
* _sqrt_recursion - Funcion to calculate the square root of a number
*@n: The number
*Return: the square root
*On error, -1 is returned, and errno is set appropriately.
*/

int _sqrt_recursion(int n)
{
	return (raiz(n, n));
}
