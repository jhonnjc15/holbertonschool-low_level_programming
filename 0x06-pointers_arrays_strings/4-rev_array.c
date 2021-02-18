#include "holberton.h"
/**
* reverse_array - function to reverse a array
* @a : the array that will be reverse
* @n : the number elements of the array
*
* Return: the reverse array
* On error, -1 is returned, and errno is set appropriately.
*/

void reverse_array(int *a, int n)
	{
	int index;
	int index_rev;
	int temp;

	index_rev = n - 1;
	if (n % 2 == 0)
		n = n / 2;
	else
		n = (n - 1) / 2;
	for (index = 0 ; index < n; index++)
		{
		temp = a[index];
		a[index] = a[index_rev];
		a[index_rev] = temp;
		index_rev--;
	}
}
