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
	dlistint_t *ptr = *h;
	dlistint_t *hld, *new;
	unsigned int number = 0;

	if (*h == NULL)
		return (NULL);

	hld = ptr;
	while (ptr)
	{
		ptr = ptr->next;
		if (idx == number)
		{
			new = malloc(sizeof(dlistint_t));
			new->n = n;
			hld->next = new;
			new->prev = hld;
			new->next = ptr;
			ptr->prev = new;
			return (new);
		}
		hld = ptr;
		number++;
	}
	return (NULL);
}
