#include "hash_tables.h"
/**
 * print_hash - prints key/values at index
 * @head: head of linked list
 * Return: void
 */
void print_hash(hash_node_t *head)
{
	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head->next)
			printf(", ");
		head = head->next;
	}
}
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int index = 0, print = 0;

	if (ht)
	{
		putchar('{');
		while (index < ht->size)
		{
			ptr = ht->array[index];

			if (ptr)
			{
				if (print)
					printf(", ");
				print_hash(ptr);
				print++;
			}
			index++;
		}
		printf("}\n");
	}
}
