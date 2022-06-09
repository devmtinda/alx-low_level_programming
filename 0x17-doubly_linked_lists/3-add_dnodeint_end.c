#include "lists.h"
/**
 * add_dnodeint_end - adds node at end of list
 * @head: pointer to doubly linked list
 * @n: integer value
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	while (ptr->next)
		ptr = ptr->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr->next = new;
	new->prev = ptr;
	new->next = NULL;

	return (new);
}
