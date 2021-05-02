#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes	the node at index
 * at a given position
 * @head: pointer to pointer od the head of the list
 * @index: the index of the node will be deleted
 * Return: The nth node of the list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int counter;

	if (tmp == NULL)
		return (0);
	if (tmp->next == NULL || index == 0)
	{
		if (index != 0)
		{	return (0);
		}
		else
		{
			free(tmp);
			*head = tmp->next;
			return (1);
		}
	}
	counter = 0;
	while (tmp != NULL)
	{
		if (index == counter)
		{
			if (tmp->next == NULL)
			{
				tmp->prev->next = NULL;
				free(tmp);
				return (1);
			}
			else
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
				free(tmp);
				return (1);
			}
		}
		tmp = tmp->next;
		counter = counter + 1;
	}
	return (0);
}
