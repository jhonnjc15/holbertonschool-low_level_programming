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
	long long int n;
	long long int div_number = 2;
	long long int max_prime;

	numero = 612852475143;
	while (div_number <= n)
	{
		if (n % div_number == 0 && PrimeOrNot(div_number))
		{
			n = n / div_number;
			max_prime = div_number;
		}
		else
			div_number++;
	}
	printf("%lli\n", max_prime);
	return (0);
}
