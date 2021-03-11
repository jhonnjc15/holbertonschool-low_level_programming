#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - function to sum all the parameters
*@n: the number of numbers
*Return: The sum
*On error, -1 is returned, and errno is set appropriately.
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	unsigned int i;
	int suma;
	va_list parametros;

	va_start(parametros, n);
	suma = 0;
	for (i = 0 ; i < n ; i++)
	{
		suma = suma + va_arg(parametros, int);
	}
	va_end(parametros);
	return (suma);
}
