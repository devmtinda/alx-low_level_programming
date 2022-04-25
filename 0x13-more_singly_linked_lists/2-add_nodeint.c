#include "lists.h"
#include <string.h>
/**
 * add_nodeint - adds node ata beginning of list
 * @head: pointer to pointer of first node
 * @n: integer
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		exit(0);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
