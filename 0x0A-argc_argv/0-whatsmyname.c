#include <stdio.h>

/**
*main - print the name of the executable
*@argc:The number of command line arguments
*@argv: An array containing the program command line arguments (size of argc)
*Return: 0
*On error, -1 is returned, and errno is set appropriately.
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
