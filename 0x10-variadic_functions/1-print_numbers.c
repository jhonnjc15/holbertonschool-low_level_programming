#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_numbers - function prints the numbers separatros by string
*@separator: the string to separate the numbers
*@n: the number of parameters
*Return: nothing
*On error, -1 is returned, and errno is set appropriately.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int valor;
	va_list parameters;

	va_start(parameters, n);
	if (separator != NULL)
	{
		for (i = 0 ; i < n ; i++)
		{
			valor = va_arg(parameters, int);
			if (i != n - 1)
				printf("%d%s", valor, separator);
			else
				printf("%d\n", valor);
		}
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			valor = va_arg(parameters, int);
			if (i != n - 1)
				printf("%d", valor);
			else
				printf("%d\n", valor);
		}
	}
	va_end(parameters);
}
