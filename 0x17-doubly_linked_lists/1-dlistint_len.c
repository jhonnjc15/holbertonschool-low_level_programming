#include "lists.h"


/**
 * dlistint_len - function that returns the number of elements in a double LL.
 * @h: List that will be counted
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t contador = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		contador = contador + 1;
		h = h->next;
	}
	return (contador);
}
