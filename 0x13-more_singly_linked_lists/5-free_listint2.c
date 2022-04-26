#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to pointer to first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
	}
}
