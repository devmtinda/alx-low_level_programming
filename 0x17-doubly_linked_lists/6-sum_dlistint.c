#include "lists.h"
/**
 * sum_dlistint - sums all the data in list
 * @head: doubly linked list
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
