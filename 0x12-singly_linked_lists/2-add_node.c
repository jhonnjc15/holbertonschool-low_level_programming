#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node - function that add a new node
*@head: the head node
*@str: the string element of the structure
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
