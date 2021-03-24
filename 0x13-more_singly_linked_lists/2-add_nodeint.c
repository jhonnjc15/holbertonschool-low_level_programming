#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint - function to add a node at the beginning of the list
*@head: A pointer to pointer to head of the list
*@n: value of the n element of the struct
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == 0)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
