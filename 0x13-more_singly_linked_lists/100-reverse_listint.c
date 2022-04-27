#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the pointer to the first node
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *buf;

	if ((*head)->next == NULL)
		return (*head);
	ptr = *head;
	(*head) = (*head)->next;
	buf = (*head)->next;
	ptr->next = NULL;

	while (buf != NULL)
	{
		(*head)->next = ptr;
		ptr = *head;
		*head = buf;
		buf = (*head)->next;
	}
	(*head)->next = ptr;

	return (*head);

}
