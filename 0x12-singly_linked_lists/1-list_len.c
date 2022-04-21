#include "lists.h"
/**
 * list_len - returns number of elements
 * @h: first node of list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
