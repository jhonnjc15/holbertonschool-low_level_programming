#include <stdio.h>
#include "holberton.h"

/**
*print_binary - function to print the binary representacion of a number
*@n: number
*Return: nothing
*On error, -1 is returned, and errno is set appropriately.
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar(1 + '0');
	else
		_putchar(0 + '0');
}
