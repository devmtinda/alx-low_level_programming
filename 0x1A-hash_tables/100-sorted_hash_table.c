#include "hash_tables.h"
/**
 * shash_table_create - creates sorted hash table
 * @size: size of the array
 * Return: pointer to hash table, NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
/**
 * shash_table_get - gets value that corresponds to key
 * @ht: shash table
 * @key: the key
 * Return: the value corresponding to key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
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
/**
 * create_node - creates node
 * @key: the key
 * @value: value associated with key
 * Return: pointer to node or NULL
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *ptr;

	ptr = malloc(sizeof(shash_node_t));
	if (ptr == NULL)
		return (NULL);
	ptr->key = strdup(key);
	ptr->value = strdup(value);

	return (ptr);

}
/**
 * insert_sorted - creates a sorted linked list
 * @new: new bucket array
 * @ht: hash table
 * Return: 1
 */
int insert_sorted(shash_node_t *new, shash_table_t *ht)
{
	shash_node_t *ptr, *hld = NULL;
	int result;

	if (!ht->shead)
	{
		new->snext = NULL;
		new->sprev = NULL;
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	ptr = ht->shead;

	while (ptr)
	{
		result = strcmp(new->key, ptr->key);
		if (result < 0)
		{
			new->sprev = hld;
			new->snext = ptr;
			ptr->sprev = new;
			if (hld)
				hld->snext = new;
			else
				ht->shead = new;
			return (1);
		}
		hld = ptr;
		ptr = ptr->snext;
	}
	hld->snext = new;
	new->sprev = hld;
	new->snext = NULL;
	ht->stail = new;
	return (1);
}
/**
 * shash_table_print_rev - prints sorted list in reverse
 * @ht: hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht)
	{
	ptr = ht->stail;
	putchar('{');
	while (ptr)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->sprev)
			printf(", ");
		ptr = ptr->sprev;
	}
	printf("}\n");
	}
}
/**
 * shash_table_print - prints sorted list
 * @ht: hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht)
	{
	ptr = ht->shead;
	putchar('{');
	while (ptr)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->snext)
			printf(", ");
		ptr = ptr->snext;
	}
	putchar('}');
	putchar('\n');
	}
}
/**
 * shash_table_set - sets key/value in hash table
 * @ht: sorted hash table
 * @key: the key
 * @value: value associated with key
 * Return: 1 if success, 0 if it fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *hold;
	unsigned long int index, result;

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
		result = insert_sorted(new, ht);
		if (!result)
			return (0);

		return (1);
	}
	hold = ht->array[index];
	while (hold)
	{
		if (!strcmp(key, hold->key))
		{
			free(hold->value);
			hold->value = strdup(value);
			return (1);
		}
		hold = hold->next;
	}
	hold = ht->array[index];
	new = create_node(key, value);
	if (new == NULL)
		return (0);
	ht->array[index] = new;
	new->next = hold;
	result = insert_sorted(new, ht);
	if (!result)
		return (0);
	return (1);
}
/**
 * shash_table_delete - deletes hash table
 * @ht: shash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr, *hld;

	if (ht)
	{
	ptr = ht->shead;
	while (ptr)
	{
		hld = ptr;
		ptr = ptr->snext;
		free(hld->key);
		free(hld->value);
		free(hld);
	}
	free(ht->array);
	free(ht);
	}
}
