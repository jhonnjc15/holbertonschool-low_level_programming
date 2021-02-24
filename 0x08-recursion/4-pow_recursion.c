#include "holberton.h"

/**
* _pow_recursion - This function give us the power of a number
*@x: The number
*@y: The power of a number
*Return: The power of a number
*On error, -1 is returned, and errno is set appropriately.
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
