#include "holberton.h"
#include <stdio.h>


/**
 * PrimeOrNot - Makes the sum of two numbers
 * @n1: First operand
 *
 * Return: 1 or 0
*/


int PrimeOrNot(long int n1);

int PrimeOrNot(long int n1)
{
	int i;

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
	long int n;
	long int numero1;

	numero1 = 612852475143;
	for (n = numero1 - 1 ; n >= 1 ; n--)
	{
		if (numero1 % n == 0)
		{
			if (PrimeOrNot(n))
			{
				printf("%li", n);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}



