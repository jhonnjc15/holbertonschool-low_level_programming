#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - functions to get the length of a string
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
*add_node_end - function that add a node to the final
*@head: the head node
*@str: the string element of the structure
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *temporal;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	temporal = *head;
	while (temporal->next != NULL)
		temporal = temporal->next;
	temporal->next = new_node;
	return (new_node);
}
