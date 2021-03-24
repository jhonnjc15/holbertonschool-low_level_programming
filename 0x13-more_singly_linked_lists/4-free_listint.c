#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*free_listint - function to free the list
*@head: A pointer to pointer to head of the list
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

void free_listint(listint_t *head)
{
	listint_t *temporal;

	while (head != NULL)
	{
		temporal = head->next;
		free(head);
		head = temporal;
	}
}
