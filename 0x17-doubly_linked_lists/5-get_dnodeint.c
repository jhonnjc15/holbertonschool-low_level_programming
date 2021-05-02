#include "lists.h"


/**
 * get_dnodeint_at_index - function that returns the nth node of a double LL
 * @head: the head of the list
 * @index: the index of the node finded
 * Return: The nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int counter;

	counter = 0;
	while (tmp != NULL)
	{
		if (index == counter)
		{
			return (tmp);
		}
		tmp = tmp->next;
		counter = counter + 1;
	}
	return (NULL);
}
