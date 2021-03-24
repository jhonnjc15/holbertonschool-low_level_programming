#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*free_listint2 - function to free the list
*@head: A pointer to pointer to head of the list
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

void free_listint2(listint_t **head)
{
	listint_t *temporal1, *temporal2;

	temporal2 = *head;
	if (temporal2 == NULL)
		return;
	while (temporal2 != NULL)
	{
		temporal1 = temporal2->next;
		free(temporal2);
		temporal2 = temporal1;
	}
	free(temporal2);
}
