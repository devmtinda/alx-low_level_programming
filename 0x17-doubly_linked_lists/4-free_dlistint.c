#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	if (head == NULL)
		return;
	while (ptr)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
