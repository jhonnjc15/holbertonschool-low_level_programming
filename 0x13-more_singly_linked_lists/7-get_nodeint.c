#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*get_nodeint_at_index - function that returns the nth node of a linked list
*@head: A pointer to pointer to head of the list
*@index: index of the node
*Return: the nth node
*On error, -1 is returned, and errno is set appropriately.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int contador = 0;

	while (head != NULL && index != contador)
	{
		head = head->next;
		contador++;
	}
	return (head);
}
