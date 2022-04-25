#include "lists.h"
/**
 * sum_listint - returns sum of all data of a list
 * @head: pointer to first node
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;

	if (ptr == NULL)
		;

	else
	{
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}
	return (sum);
}
