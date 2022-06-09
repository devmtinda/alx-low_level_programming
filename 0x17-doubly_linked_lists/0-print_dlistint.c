#include "lists.h"
/**
 * print_dlistint - prints elements of doubly linked list
 * @h: doubly linked list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
