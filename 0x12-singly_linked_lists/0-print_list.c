#include <stdio.h>
#include "lists.h"
/**
*print_list - function to print all the elements of a list
*@h: A structure
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

size_t print_list(const list_t *h)
{
	int total_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		total_nodes++;
	}
	return (total_nodes);
}
