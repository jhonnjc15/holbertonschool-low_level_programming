#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: the size of the hash table.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size_hash_table;
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *head;

	size_hash_table = ht->size;
	index = key_index((unsigned char *)key, size_hash_table);

	head = ht->array[index];
	/*If there is a collision*/
	while (head != NULL)
	{
		/*Replace the old value and put the new value of the key*/
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}
	/*In th next part the head is NULL*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	ht->array[index] = new_node;
	return (1);
}
