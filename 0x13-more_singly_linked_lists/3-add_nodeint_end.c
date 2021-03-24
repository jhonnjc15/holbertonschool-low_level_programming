#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint_end - function to add a node at the beginning of the list
*@head: A pointer to pointer to head of the list
*@n: value of the n element of the struct
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_at_end = malloc(sizeof(listint_t));
	listint_t *temporal;

	if (new_node_at_end == NULL)
		return (NULL);

	new_node_at_end->n = n;
	new_node_at_end->next = NULL;
	if (*head == NULL)
		*head = new_node_at_end;
	else
	{
		temporal = *head;
		while (temporal->next != NULL)
		{
			temporal = temporal->next;
		}
		temporal->next = new_node_at_end;
	}
	return (new_node_at_end);
}
