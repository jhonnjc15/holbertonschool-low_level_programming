#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: a integer number
 *
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
	{
	int num1, num2;

	num1 = n;
	while  (num1 != 98)
		{
		if (num1 < 0)
			{
			_putchar('-');
			num2 = -1 * num1;
			if (num2 / 100 != 0)
				_putchar(num2 / 100 + '0');
			if ((num2 / 10) % 10 != 0)
				_putchar((num2 / 10) % 10 + '0');
			_putchar(num2 % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
			{
		if (num1 / 100 != 0)
			_putchar(num1 / 100 + '0');
		if ((num1 / 10) % 10 != 0)
			_putchar((num1 / 10) % 10 + '0');
		_putchar(num1 % 10 + '0');
		_putchar(',');
		_putchar(' ');
		}
		if (num1 <= 98)
			num1++;
		else
			num1--;
	}
	_putchar(num1 / 10 + '0');
	_putchar(num1 % 10 + '0');
	_putchar ('\n');
}
