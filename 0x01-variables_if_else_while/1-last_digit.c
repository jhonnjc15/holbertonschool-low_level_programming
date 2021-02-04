#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
	int n;
	int res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	res = n % 10;
	if (res  > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, res);
	}
	else
		{
		if (res == 0)
			{
			printf("Last digit of %d is %d and is 0\n", n, res);
		}
		else
			{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, res);
		}
	}
	return (0);
}
