#include "lists.h"
/**
 * listint_len - returns number of elements in linked list
 * @h: points to first node
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
