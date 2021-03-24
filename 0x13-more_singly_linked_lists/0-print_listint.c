#include <stdio.h>
#include "lists.h"
/**
*print_listint - function to print all the elements of a list
*@h: A structure
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

size_t print_listint(const listint_t *h)
{
	int total_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total_nodes++;
	}
	return (total_nodes);
}
