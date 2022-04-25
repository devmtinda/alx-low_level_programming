#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head != NULL)
	{
		ptr = head;
		while (head != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
	}
}
