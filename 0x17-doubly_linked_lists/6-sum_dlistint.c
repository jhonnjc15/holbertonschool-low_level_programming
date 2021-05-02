#include "lists.h"


/**
 * sum_dlistint - function that the sum of all the data (n) of a double LL
 * @head: the head of the list
 * Return: The nth node of the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum;

	sum = 0;
	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
