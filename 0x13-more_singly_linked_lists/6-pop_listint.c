#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*pop_listint - function to deletes the head of a list
*@head: A pointer to pointer to head of the list
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

int pop_listint(listint_t **head)
{

	listint_t *temporal;
	int pop_num;

	if (*head == NULL)
		return (0);

	pop_num = (*head)->n;
	temporal = (*head)->next;
	free(*head);
	(*head) = temporal;
	return (pop_num);
}
