#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: structure pointeur list_t
 * @index : index point the node
 *
 * Return: index of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (current == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
			current = current->next;
			count++;
	}

	return (current);
}
