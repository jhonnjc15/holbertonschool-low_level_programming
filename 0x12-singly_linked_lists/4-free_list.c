#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*free_list - function free a list
*@head: the head node
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

void free_list(list_t *head)
{
	list_t *temporal;

	while (head)
	{
		temporal = head->next;
		free(head->str);
		free(head);
		head = temporal;
	}
}
