#include <stdio.h>

int is_palindrome(int n)
{
    int reversedN = 0, remainder, originalN;
    originalN = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
		return (1);
	else
		return (0);
}

int main(void)
{
	int max_number = 999;
	int i, j;
	int max_palin = 1;

	for (i = max_number ; i > 0 ; i--)
	{
		for (j = max_number ; j > 0 ; j--)
		{
			if (is_palindrome(i * j) == 1)
			{
				if (i *j > max_palin)
					max_palin = i * j;
			}
		}
	}
	printf("El maximo es %d\n", max_palin);
	return (0);
}
