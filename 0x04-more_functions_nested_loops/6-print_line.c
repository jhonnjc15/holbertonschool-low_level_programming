#include "holberton.h"

/**
* print_line - prints 10 times the numbers, from 0 to 14
* @n: The number of "_" to print
*
* Return: nothing
* On error, -1 is returned, and errno is set appropriately.
*/

void print_line(int n)
	{
	int times;

	if (n > 0)
	{
		for (times = 1 ; times <= n ; times++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
