#include <stdio.h>
/**
 * main- Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */

int main(void)
	{
	int num;
	int num1;

	for (num = 0 ; num <= 9 ; num++)
		{
		for (num1 = 0 ; num1 <= 9 ; num1++)
			{
			putchar (num + '0');
			putchar (num1 + '0');
			if (num != 9 || num1 != 9)
				{
			putchar (',');
			putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
