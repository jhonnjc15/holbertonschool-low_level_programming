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
	listint_t *temporal1;

	if (head == NULL || *head == NULL)
		return;
	while (*head)
	{
		temporal1 = (*head)->next;
		free(*head);
		(*head) = temporal1;
	}
}
