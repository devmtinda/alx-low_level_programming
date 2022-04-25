#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of a list
 * @head: pointer to pointer of first node
 * @n: integer
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			exit(0);

		(*head)->n = n;
		(*head)->next = NULL;
		new = *head;
	}
	else
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			exit(0);

		new->n = n;
		new->next = NULL;
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}

	return (new);
}
