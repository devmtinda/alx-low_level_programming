#include "hash_tables.h"
/**
 * create_node - creates node
 * @key: the key
 * @value: value associated with key
 * Return: pointer to node or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *ptr;

	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
		return (NULL);
	ptr->key = strdup(key);
	ptr->value = strdup(value);

	return (ptr);

}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *hold;

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new = create_node(key, value);
		if (new == NULL)
			return (0);
		new->next = NULL;
		ht->array[index] = new;
	}

	else
	{
		new = create_node(key, value);
		if (new == NULL)
			return (0);
		hold = ht->array[index];
		ht->array[index] = new;
		new->next = hold;
	}

	return (1);

}
