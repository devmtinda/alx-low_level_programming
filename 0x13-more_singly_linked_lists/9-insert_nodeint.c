#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to first node
 * @idx: index of new node
 * @n: integer
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new, *hold;
	unsigned int i = 0;

	ptr = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			exit(0);
		new->n = n;
		*head = new;
		new->next = ptr;
	}

	else
	{
	while (ptr != NULL)
	{
		if (idx - 1 == i)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				exit(0);
			hold = ptr->next;
			new->n = n;
			ptr->next = new;
			ptr->next->next = hold;
			break;
		}
		ptr = ptr->next;
		i++;
	}
	}
	if (idx > i + 1)
	{
		new = NULL;
	}
	return (new);
}
