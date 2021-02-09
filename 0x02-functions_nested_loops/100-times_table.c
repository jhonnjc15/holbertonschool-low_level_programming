#include "holberton.h"

/**
 * print_times_table-This function prints the n times table, starting with 0.
 * @n: the n table.
 *
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
	{
	if (n < 15 && n > 0)
		{
		int tabla, sec1;

		for (tabla = 0 ; tabla <= n ; tabla++)
			{
			for (sec1 = 0 ; sec1 <= n ; sec1++)
				{
				if ((tabla * sec1) < 10)
					{
					if (sec1 != 0)
						{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((tabla * sec1) + '0');
				}
				else if ((tabla * sec1) >= 10 && (tabla * sec1) < 100)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((tabla * sec1) / 10 + '0');
					_putchar((tabla * sec1) % 10 + '0');
				}
				else
					{
					_putchar(',');
					_putchar(' ');
					_putchar((tabla * sec1) / 100 + '0');
					_putchar(((tabla * sec1) / 10) % 10 + '0');
					_putchar((tabla * sec1) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
