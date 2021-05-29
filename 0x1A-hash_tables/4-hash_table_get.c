#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:  is the hash table you want to look into
 * @key:  is the key you are looking for
 * Return: the string value of the elemtent, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size_hash_table, index;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);

	size_hash_table = ht->size;
	index = key_index((unsigned char *)key, size_hash_table);

	while (ht->array[index] != NULL)
	{
		if (!strcmp(ht->array[index]->key, key))
		{
			return (ht->array[index]->value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
