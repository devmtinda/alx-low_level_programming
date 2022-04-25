#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to a pointer to the first node
 * @index: index of the node
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		if (index == n)
			break;
		ptr = ptr->next;
		n++;
	}
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
