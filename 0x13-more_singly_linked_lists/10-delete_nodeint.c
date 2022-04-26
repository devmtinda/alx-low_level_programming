#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer to first node
 * @index: index of node to be deleted
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *s;
	unsigned int n = 0;
	int i;

	ptr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		i = 1;
		free(ptr);
	}
	else
	{
	while (ptr != NULL)
	{
		if (n == index - 1)
		{
			s = ptr->next;
			ptr->next = ptr->next->next;
			i = 1;
			free(s);
			break;
		}
		ptr = ptr->next;
		n++;
	}
	if (index > n)
		i = -1;
	}

	return (i);
}
