#include "lists.h"
/**
 * add_dnodeint - adds node at beginning of list
 * @head: pointer to doubly linked list
 * @n: integer value
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *hld = *head;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	(*head)->prev = new;
	*head = new;
	new->next = hld;

	return (new);
}
