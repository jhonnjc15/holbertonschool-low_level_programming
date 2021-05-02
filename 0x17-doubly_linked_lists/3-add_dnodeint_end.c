#include "lists.h"


/**
 * add_dnodeint_end - function that adds a new node at the final of a double LL
 * @head: the head of the list
 * @n: the element of the new node
 * Return: The double linked list with the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *head;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (tmp == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	new_node->prev = tmp;
	return (*head);
}
