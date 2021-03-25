#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*delete_nodeint_at_index - function to delete a node in a idx position
*@head: A pointer to pointer to head of the list
*@index: The index where the delete node will be
*Return: 1 if it succeeded, -1 if it failed
*On error, -1 is returned, and errno is set appropriately.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporal, *temp2;
	unsigned int contador = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temporal = (*head)->next;
		free(*head);
		*head = temporal;
		return (1);
	}
	temporal = *head;
	while (temporal != NULL)
	{
		if (contador == index)
		{
			temp2->next = temporal->next;
			free(temporal);
			return (1);
		}
		temp2 = temporal;
		temporal = temporal->next;
		contador++;
	}
	return (-1);
}
