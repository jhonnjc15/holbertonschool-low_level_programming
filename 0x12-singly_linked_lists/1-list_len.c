#include <stdio.h>
#include "lists.h"
/**
*list_len - function to print all the elements of a list
*@h: A structure
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

size_t list_len(const list_t *h)
{
	int total_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		total_nodes++;
	}
	return (total_nodes);
}
