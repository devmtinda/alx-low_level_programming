#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds node at beginning of list
 * @head: pointer to head pointer
 * @str: string to be appended
 * Return: list_t pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t p;
	list_t *other;

<<<<<<< HEAD
	other = malloc(sizeof(list_t));
=======
	other->next = *head;
>>>>>>> 60ebbc43cfdc04330bdfb72ccbb22bc8c2cc636a
	other->str = strdup(str);
	p = strlen(str);
	other->len = p;
	
	*head = other;

	return (*head);
}
