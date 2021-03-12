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
	unsigned int i;
	int suma, valor;
	va_list parametros;

	va_start(parametros, n);
	if (n == 0)
		return (0);
	suma = 0;
	for (i = 0 ; i < n ; i++)
	{
		valor = va_arg(parametros, int);
		suma = suma + valor;
	}
	va_end(parametros);
	return (suma);
}
