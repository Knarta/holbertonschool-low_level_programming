#include "lists.h"

/**
 * free_dlistint - that frees a list
 * @head: pointer which the pointer to new node
 * Return: Void
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
