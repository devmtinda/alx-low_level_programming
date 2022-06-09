#include "lists.h"
/**
 * dlistint_len - returns number of elements in a list
 * @h: doubly linked list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		number++;
	}

	return (number);
}
