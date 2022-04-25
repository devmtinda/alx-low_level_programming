#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to first node
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	printf("%d\n", h->n);
	n++;

	return (n);
}
