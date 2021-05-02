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
	unsigned int counter = 0;

	if (tmp == NULL)
		return (NULL);
	/*add_dnodeint recibe como param la direc de la direc de memoria de la lista*/
	if (idx == 0)
	{	new_node = add_dnodeint(h, n);
		return (new_node); /*Y retorna la direccion de memoria*/
	}

	while (tmp != NULL && tmp->next != NULL)
	{
		if ((idx - 1) == counter)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;

			new_node->next = tmp->next;
			tmp->next = new_node;

			new_node->prev = tmp;
			if (new_node->next != NULL)
				new_node->next->prev = new_node;
			/*tmp->next->prev = new_node;*/
			return (new_node);
		}
		tmp = tmp->next;
		counter = counter + 1;
	}
	if (idx == counter + 1)
	{	new_node = add_dnodeint_end(&tmp, n);
		return (new_node);
	}
	return (NULL);
}
