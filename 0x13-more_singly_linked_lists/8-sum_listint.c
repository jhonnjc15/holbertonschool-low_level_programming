#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*sum_listint - function that returns the sum of n elements of the list
*@head: A pointer to pointer to head of the list
*Return: the nth node
*On error, -1 is returned, and errno is set appropriately.
*/

int sum_listint(listint_t *head)
{

	int suma = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		suma = suma + head->n;
		head = head->next;
	}
	return (suma);
}
