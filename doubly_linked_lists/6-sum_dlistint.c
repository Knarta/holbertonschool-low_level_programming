#include "lists.h"
/**
 * sum_dlistint - function that return the sum data of a list
 * @head: structure pointeur list_t
 *
 * Return: sum all the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
