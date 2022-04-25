#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to first node
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
