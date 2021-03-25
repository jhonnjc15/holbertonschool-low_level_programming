#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*reverse_listint - function to reverse the list
*@head: A pointer to pointer to head of the list
*Return: the nth node
*On error, -1 is returned, and errno is set appropriately.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	temp1 = *head;
	temp2 = (*head)->next;
	temp1->next = NULL;
	*head = temp2;
	while (*head)
	{
		*head = (*head)->next;
		temp2->next = temp1;
		temp1 = temp2;
		temp2 = (*head);
	}
	*head = temp1;
	return (*head);
}
