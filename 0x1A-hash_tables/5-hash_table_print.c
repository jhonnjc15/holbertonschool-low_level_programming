#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht:  is the hash table you want to look into
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size_hash_table;
	unsigned long int i;
	unsigned long int counter = 0, counter2 = 0;
	hash_node_t *temporal;

	if (ht == NULL)
		return;

	size_hash_table = ht->size;
	for (i = 0; i < size_hash_table; i++)
	{
		temporal = ht->array[i];
		while (temporal != NULL)
		{
			counter = counter + 1;
			temporal = temporal->next;
		}
	}

	printf("{");
	for (i = 0; i < size_hash_table; i++)
	{
		temporal = ht->array[i];
		while (temporal != NULL)
		{
			printf("'%s': '%s'", temporal->key, temporal->value);
			if (counter2 + 1 != counter)
				printf(", ");
			counter2 = counter2 + 1;
			temporal = temporal->next;
		}
	}
	printf("}\n");
}
