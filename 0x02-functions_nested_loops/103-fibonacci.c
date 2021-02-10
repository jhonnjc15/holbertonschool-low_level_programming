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
	unsigned long num1, num2, suma, suma_par;

	num1 = 1;
	num2 = 2;
	suma_par = 0;
	suma = num1 + num2;
	while (suma < 4000000)
		{
		num1 = num2;
		num2 = suma;
		suma = num1 + num2;
		if (suma % 2 == 0)
			suma_par = suma_par + suma;
	}
	printf("%lu\n", suma_par + 2);
	return (0);
}
