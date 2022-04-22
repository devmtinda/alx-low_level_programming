#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds node at end of list
 * @head: pointer to pointer of address of first node
 * @str: string
 * Return: pointer to list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *other;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		exit(0);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	other = *head;
	while (other->next != NULL)
	{
		other = other->next;
	}
	other->next = new;

	return (new);
}
