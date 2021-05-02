#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: pointer to pointer od the head of the list
 * @idx: the index of the node will be placed
 * @n: the value of the new node
 * Return: The nth node of the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new_node;
	unsigned int counter;


	if (tmp == NULL)
	{
	/*add_dnodeint recibe como param la direc de la direc de memoria de la lista*/
		if (idx == 0)
		{
			add_dnodeint(h, n);
			return (*h); /*Y retorna la direccion de memoria*/
		}
	}
	counter = 0;
	while (tmp != NULL && tmp->next != NULL)
	{
		if ((idx - 1) == counter)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;

			tmp->next->prev = new_node;
			new_node->next = tmp->next;

			tmp->next = new_node;
			new_node->prev = tmp;
			return (new_node);
		}
		tmp = tmp->next;
		counter = counter + 1;
	}
	if (idx == counter + 1)
	{
		add_dnodeint_end(&tmp, n);
		return (tmp);
	}
	return (NULL);
}
