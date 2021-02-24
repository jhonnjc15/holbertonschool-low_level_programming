#include "holberton.h"

/**
* esprimo - Funcion to know is a nuber is prime
*@n: The number
*@i: The number to change while compare with the real number
*Return: 1 if the number is prime, 0 if not
*On error, -1 is returned, and errno is set appropriately.
*/

int esprimo(int n, int i)
{
	if (i > 1)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (esprimo(n, i - 1));
		}
	}
	else
		return (1);
}

/**
* is_prime_number - Funcion to know is a nuber is prime
*@n: The number
*Return: 1 if the number is prime, 0 if not
*On error, -1 is returned, and errno is set appropriately.
*/

int is_prime_number(int n)
{
	if (n > 1)
	{
		return (esprimo(n, n - 1));
	}
	else
		return (0);
}
