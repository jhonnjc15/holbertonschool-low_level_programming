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
*str_concat - function to concatenate two strings
*@s1:First string
*@s2:Second string
*Return: the new concatenate string
*On error, -1 is returned, and errno is set appropriately.
*/

char *str_concat(char *s1, char *s2)
{
	char *conc_string;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	conc_string = malloc(sizeof(char) * (longitud(s1) + longitud(s2)) + 2);
	if (conc_string == NULL)
		return (NULL);
	for (i = 0; i < longitud(s1) ; i++)
	{
		conc_string[i] = s1[i];
	}
	conc_string[longitud(s1)] = '\n';
	for (i = 0; i <= longitud(s2) ; i++)
	{
		conc_string[i + longitud(s1) + 1] = s2[i];
	}
	return (conc_string);
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

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0 ; i < ac ; i++)
	{
		length = length + longitud(av[i]);
	}
	conc_string = malloc(sizeof(char) * length + ac - 1);
	if (conc_string == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		conc_string = str_concat(av[i], av[i + 1]);
		av[i + 1] = conc_string;
	}
	return (conc_string);
}
