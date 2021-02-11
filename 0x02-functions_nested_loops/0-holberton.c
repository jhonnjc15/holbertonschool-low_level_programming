#include "holberton.h"

/**
 * main - Short description, single line
 * @void : Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */

void main(void)
	{
	int n, suma;

	suma = 0;
	for (n = 1 ; n< 1024 ; n ++)
		if (n % 3 == 0 || n % 5 == 0)
			{
			suma = suma + n;
		}
	printf(suma);
}
