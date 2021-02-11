#include "holberton.h"

/**
* print_most_numbers - prints the numbers, from 0 to 9
* @void: The first number
*
* Return: nothing
* On error, -1 is returned, and errno is set appropriately.
*/

void print_most_numbers(void)
	{
	int num;

	for (num = 0; num <= 9 ; num++)
		{
		if ((num != 4 && num != 2))
			_putchar ('0' + num);
	}
	_putchar ('\n');
}
