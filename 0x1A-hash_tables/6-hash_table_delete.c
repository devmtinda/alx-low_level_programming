#include "hash_tables.h"
/**
 * free_hash_node - frees linked list
 * @head: head of linked list
 * Return: void
 */
void free_hash_node(hash_node_t *head)
{
	hash_node_t *hld;

	while (head)
	{
		hld = head;
		head = head->next;
		free(hld->key);
		free(hld->value);
		free(hld);
	}
}
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int index = 0;

	if (ht)
	{
	while (index < ht->size)
	{
		ptr = ht->array[index];
		if (ptr)
		{
			free_hash_node(ptr);
		}

		index++;
	}
	free(ht->array);
	free(ht);
	}
}
