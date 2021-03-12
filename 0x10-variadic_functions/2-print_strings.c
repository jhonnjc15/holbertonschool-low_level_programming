#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
/**
*print_strings - function prints the strings  separates by string
*@separator: the string to separate the numbers
*@n: the number of parameters
*Return: nothing
*On error, -1 is returned, and errno is set appropriately.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *valor;
	va_list parameters;

	va_start(parameters, n);
	if (separator != NULL)
	{
		for (i = 0 ; i < n ; i++)
		{
			valor = va_arg(parameters, char *);
			if (valor == NULL)
				valor = "(nil)";
			if (i != n - 1)
				printf("%s%s", valor, separator);
			else
				printf("%s\n", valor);
		}
	}
	else
	{
		for (i = 0 ; i < n  ; i++)
		{
			valor = va_arg(parameters, char *);
			if (valor == NULL)
				valor = "(nil)";
			if (i != n - 1)
				printf("%s", valor);
			else
				printf("%s\n", valor);
		}
	}
	va_end(parameters);
}
