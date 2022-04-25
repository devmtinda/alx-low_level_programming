#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		;

	else
	{
		while (head != NULL)
		{
			free(head);
			head = head->next;
		}
	}
}
