#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *@argc:The number of command line arguments
 *@argv: An array containing the program command line arguments (size of argc)
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int funcion;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "+") != 0) &&
					(strcmp(argv[2], "-") != 0) &&
					(strcmp(argv[2], "*") != 0) &&
					(strcmp(argv[2], "/") != 0) &&
					(strcmp(argv[2], "%") != 0))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
					&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	funcion = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", funcion);
	return (0);
}
