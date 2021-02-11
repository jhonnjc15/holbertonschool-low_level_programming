#include "holberton.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* @void:
*
* Return: nothing
* On error, -1 is returned, and errno is set appropriately.
*/

void more_numbers(void)
	{
	int times, num;

	for (times = 0 ; times < 10 ; times++)
		{
		for (num = 0 ; num <= 14 ; num++)
			{
			if (num / 10 != 0)
				{
				_putchar ('0' + num / 10);
			}
			_putchar ('0' + num % 10);
		}
		_putchar ('\n');
	}
}
