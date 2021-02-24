#include "holberton.h"

/**
* factorial- This function give us the factorial of a number
*@n: The number
*Return: The factorial of a number
*On error, -1 is returned, and errno is set appropriately.
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
