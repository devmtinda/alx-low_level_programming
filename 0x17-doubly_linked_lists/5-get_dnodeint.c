#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: doubly linked list
 * @index: integer value
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int number = 0;

	if (head == NULL)
		return (NULL);
	while (ptr)
	{
		if (number == index)
			return (ptr);
		ptr = ptr->next;
		number++;
	}
	return (NULL);
}
