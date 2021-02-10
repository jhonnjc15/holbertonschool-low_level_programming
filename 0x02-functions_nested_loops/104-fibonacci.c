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
	int n;
	float num1, num2, suma;

	num1 = 1;
	num2 = 2;
	printf("%.0f, ", num1);
	printf("%.0f, ", num2);
	for (n = 3; n < 98; n++)
		{
		suma = num1 + num2;
		printf("%.0f, ", suma);
		num1 = num2;
		num2 = suma;
	}
	suma = num1 + num2;
	printf("%.0f\n", suma);
	return (0);
}
