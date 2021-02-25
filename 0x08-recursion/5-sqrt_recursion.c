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
	if (i >= 1)
	{
		if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (raiz(n, i - 1));
		}
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
	if (n > 1)
	{
		return (raiz(n, n - 1));
	}
	else if (n == 1)
	{
		return (n);
	}
	else
		return (-1);
}