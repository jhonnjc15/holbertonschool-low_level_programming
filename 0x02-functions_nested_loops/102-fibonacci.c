#include <stdio.h>
#include "holberton.h"

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
	int n;
	unsigned long num1, num2, suma;

	num1 = 1;
	num2 = 2;
	printf("%lu, ", num1);
	printf("%lu, ", num2);
	for (n = 1; n < 50; n++)
		{
		suma = num1 + num2;
		printf("%lu, ", suma);
		num1 = num2;
		num2 = suma;
	}
	suma = num1 + num2;
	printf("%lu\n", suma);
	return (0);
}
