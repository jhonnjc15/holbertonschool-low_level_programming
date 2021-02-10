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
	int n, n_0, n_1, suma;

	n_0 = 1;
	n_1 = 2;
	printf("1, ");
	printf("2, ");
	for (n = 1 ; n <= 50 ; n++)
		{
		suma = n_0 + n_1;
		printf("%d, ", suma);
		n_0 = n_1;
		n_1 = suma;
	}
	printf("%d\n", suma);
	return (0);
}

