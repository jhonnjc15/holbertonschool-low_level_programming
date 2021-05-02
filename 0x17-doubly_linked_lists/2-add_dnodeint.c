#include "lists.h"


/**
 * add_dnodeint - function that adds a new node at the beginning of a double LL
 * @head: the head of the list
 * @n: the element of the new node
 * Return: The double linked list with the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *head;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = tmp;

	/*Condición para cuando no haya nodos --> el nodo colocado sea el primero*/
	if (tmp != NULL)
		tmp->prev = new_node;
	*head = new_node;
	return (new_node);
}
