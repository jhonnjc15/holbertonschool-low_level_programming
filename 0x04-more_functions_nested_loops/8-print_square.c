#include "holberton.h"

/**
* print_square - print a prints a square
* @size: The number of "_" to print
*
* Return: nothing
* On error, -1 is returned, and errno is set appropriately.
*/

void print_square(int size)
	{
	int times, times1;

	if (size > 0)
	{
		for (times = 1 ; times <= size ; times++)
		{
			for (times1 = 1 ; times1 <= size ; times1++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
