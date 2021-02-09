#include "holberton.h"

/**
 * times_table - Write a function that prints the 9 times table, starting with 0.
 * @void:
 *
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
        {
        int tabla, sec1;

        for (tabla = 0 ; tabla <= 9 ; tabla = tabla +1)
                {
                for (sec1 = 0 ; sec1 <= 9 ; sec1 = sec1 +1)
                        {
                        if  ( (tabla*sec1) < 10 )
                                {
				if ( sec1 != 0 )
                                        {
                                        _putchar(',');
                                        _putchar(' ');
                                        _putchar(' ');
                                }
                                _putchar((tabla*sec1) + '0');
                                
                        }
                        else
                                {
				 _putchar(',');
				_putchar(' ');
                                _putchar((tabla*sec1)/10 + '0');
                                _putchar((tabla*sec1)%10 + '0');
                                
                        }
                }
                _putchar('\n');
        }
}
