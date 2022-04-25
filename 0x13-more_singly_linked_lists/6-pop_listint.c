#include "lists.h"
/**
 * pop_listint - deletes the head node and returns head node data
 * @head:pointer to pointer to first node
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *new;

	if (*head == NULL)
		n = 0;
	else
	{
	new = *head;
	n = new->n;
	*head = new->next;
	free(new);
	}

	return (n);

}
