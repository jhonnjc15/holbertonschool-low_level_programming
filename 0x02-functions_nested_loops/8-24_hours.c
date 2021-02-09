#include "holberton.h"

/**
 * jack_bauer - print the every minute of the day.
 * @void:
 *
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
	{
	int min1, sec1;

	for (min1 = 0 ; min1 <= 23 ; min1++)
		{
		for (sec1 = 0 ; sec1 <= 59 ; sec1++)
			{
			_putchar((min1 / 10) + '0');
			_putchar((min1 % 10) + '0');
			_putchar(':');
			_putchar((sec1 / 10) + '0');
			_putchar((sec1 % 10) + '0');
			_putchar('\n');
		}
	}
}
