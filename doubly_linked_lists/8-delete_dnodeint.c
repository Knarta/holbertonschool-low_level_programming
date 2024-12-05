#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer which the pointer to new node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	while (i < index)
	{
		if (delete == NULL)
			return (-1);
		delete = delete->next;
		i++;
	}

	if (delete == *head)
	{
		*head = delete->next;

		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		delete->prev->next = delete->next;
		if (delete->next)
			delete->next->prev = delete->prev;
	}

	free(delete);

	return (1);
}
