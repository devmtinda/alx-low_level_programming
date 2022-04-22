#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: pointer to first node of list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		exit(0);
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head->str);
	free(head);
}
