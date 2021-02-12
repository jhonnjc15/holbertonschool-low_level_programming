#include "holberton.h"
#include <stdio.h>

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



