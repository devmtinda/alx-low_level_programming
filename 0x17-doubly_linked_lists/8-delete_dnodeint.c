#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at the index
 * @head: pointer to doubly linked list
 * @index: index of node to be deleted
 * Return: 1 if succeeded, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *hld;
	unsigned int number = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (ptr->next)
	{
		if (index == number)
		{
			hld->next = ptr->next;
			ptr->next->prev = hld;
			free(ptr);
			return (1);
		}
		hld = ptr;
		ptr = ptr->next;
		number++;
	}
	if (index == number)
	{
		hld->next = NULL;
		free(ptr);
		return (1);
	}
	return (-1);
}
