#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: the key you are looking for
 * Return: value if success, NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (!ptr)
		return (NULL);
	while (ptr)
	{
		if (!strcmp(key, ptr->key))
			return (ptr->value);

		ptr = ptr->next;
	}

	return (NULL);
}
