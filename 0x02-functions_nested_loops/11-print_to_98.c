#include "holberton.h"
#include<stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: a integer number
 *
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
	{
	int num;

	if (n <= 98)
		{
		for (num = n ; num <= 98 ; num++)
			{
		if (num == 98)
			printf("98");
		else
			printf("%d, ", num);
		}
	}
	else
		{
		for (num = n ; num >= 98 ; num--)
			{
		if (num == 98)
			printf("98");
		else
			printf("%d, ", num);
		}
	}
	printf("\n");
}
