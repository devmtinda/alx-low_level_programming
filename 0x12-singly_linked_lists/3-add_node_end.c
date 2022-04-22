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

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			exit(0);

		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
		new = *head;
	}

	else
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			exit(0);

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
		other = *head;

		while (other->next != NULL)
		{
			other = other->next;
		}
		other->next = new;
	}
	return (new);
}
