#include "holberton.h"
#include <stdio.h>


/**
 * PrimeOrNot - Makes the sum of two numbers
 * @n1: First operand
 *
 * Return: 1 or 0
*/


int PrimeOrNot(unsigned long int n1);

int PrimeOrNot(unsigned long int n1)
{
	unsigned long int i;

	i = 2;
	while (i <= n1 / 2)
	{
		if (n1 % i != 0)
			i = i + 1;
		else
			return (0);
	}
	return (1);
}

/**
 * main - Short description, single line
 * @void : Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */


int main(void)
{
	unsigned long int numero, i, maximo;

	numero = 612852475143;
	for (i = 2 ; i <= numero ; i++)
	{
		if (numero % i == 0)
		{
			if (PrimeOrNot(i))
			{
				numero = numero / i;
				maximo = i;
			}
		}
	}
	printf("%lu\n", maximo);
	return (0);
}
