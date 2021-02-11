#include "holberton.h"

/**
* print_triangle - prints a triangle
* @size: The number of rows of the triangle
*
* Return: nothing
* On error, -1 is returned, and errno is set appropriately.
*/

void print_triangle(int size)
	{
	int times, times1, times2;

	if (size > 0)
	{
		for (times = 1 ; times <= size ; times++)
		{
			for (times1 = 1 ; times1 <= size - times  ; times1++)
			{
				_putchar (' ');
			}
			for (times2 = 1 ; times2 <= times ; times2++)
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
