#include <stdio.h>
#include <stdlib.h>

/**
*longitud - Give us the length of a string
*@s: A char pointer string.
*Return: 1 if s is a palondrome, 0 if not.
*On error, -1 is returned, and errno is set appropriately.
*/

int longitud(char *s)
{
	if (!(*s))
		return (0);
	return (1 + longitud(s + 1));
}

/**
*argstostr - function to concatenate all the arguments
*@ac:the argc argument
*@av:the argv argument
*Return: the new concatenate string
*On error, -1 is returned, and errno is set appropriately.
*/

char *argstostr(int ac, char **av)
{
	char *conc_string;
	int i, length;
	int j, counter;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0 ; i < ac ; i++)
	{
		length = length + longitud(av[i]);
	}
	conc_string = malloc(sizeof(char) * (length + ac + 1));
	if (conc_string == NULL)
		return (NULL);
	counter = 0;
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; j < longitud(av[i]) ; j++)
		{
			conc_string[counter] = av[i][j];
			counter++;
		}
		conc_string[counter] = '\n';
		counter++;
	}
	conc_string[counter] = '\0';
	return (conc_string);
}
