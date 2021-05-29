#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht:  is the hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *runner, *temp;
	unsigned int idx;

	if (ht == NULL)
		return;

	idx = 0;
	while (idx < ht->size)
	{
		runner = ht->array[idx];
		while (runner)
		{
			temp = runner->next;
			free(runner->key);
			free(runner->value);
			free(runner);
			runner = temp;
		}
		++idx;
	}
	free(ht->array);
	free(ht);
}
