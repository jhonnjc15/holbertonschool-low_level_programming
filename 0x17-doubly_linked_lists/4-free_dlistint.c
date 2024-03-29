#include "lists.h"


/**
 * free_dlistint - function that frees a double LL
 * @head: the head of the list
 * Return: The double linked list with the new node.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			free(tmp);
			return;
		}
		tmp = tmp->next;
		free(tmp->prev);
		head = tmp;
	}
}
