#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at a given position
 * @h: pointer to doubly linked list
 * @idx: index where node is to be inserted
 * @n: data to be added
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new;
	unsigned int number = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (ptr)
	{
		if (idx == number)
		{
			new->n = n;
			ptr->prev->next = new;
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev = new;
			return (new);
		}
		ptr = ptr->next;
		number++;
	}
	if (idx == number)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
