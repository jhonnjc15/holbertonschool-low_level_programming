#include "holberton.h"

/**
* print_diagonal - prints 10 times the numbers, from 0 to 14
* @n: The number of "_" to print
*
* Return: nothing
* On error, -1 is returned, and errno is set appropriately.
*/

void print_diagonal(int n)
	{
	int times, times1;

	if (n > 0)
	{
		for (times = 1 ; times <= n ; times++)
		{
			for (times1 = 0 ; times1 <= times - 1 ; times1++)
			{
				_putchar (' ');
			}
			_putchar (92);
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
