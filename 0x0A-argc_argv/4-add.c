#include <stdio.h>
#include <stdlib.h>
/**
*main - print the name of the executable
*@argc:The number of command line arguments
*@argv: An array containing the program command line arguments (size of argc)
*Return: 0
*On error, -1 is returned, and errno is set appropriately.
*/

int main(int argc, char *argv[])
{
	int i;
	int suma;

	suma = 0;

	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			if (argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			else
				suma = suma + atoi(argv[i]);
		}
		else
		{
			suma = suma + atoi(argv[i]);
		}
	}
	printf("%d\n", suma);
	return (0);
}
