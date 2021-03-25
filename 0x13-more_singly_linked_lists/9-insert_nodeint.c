#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*insert_nodeint_at_index - function to add a node in a idx position
*@head: A pointer to pointer to head of the list
*@idx: The index where the new node will be
*@n: The new value
*Return: the nth node
*On error, -1 is returned, and errno is set appropriately.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *temporal, *temp2;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int contador;
	if (head == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temporal = *head;
	temp2 = NULL;
	while (temporal != NULL && contador != idx)
	{
		temp2 = temporal;
		temporal = temporal->next;
		contador++;
	}
	if (temporal == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temporal;
	temp2->next = new_node;
	return (new_node);
}
