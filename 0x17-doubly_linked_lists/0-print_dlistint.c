#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: List that will be printed
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t contador = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		contador = contador + 1;
		h = h->next;
	}
	return (contador);
}
