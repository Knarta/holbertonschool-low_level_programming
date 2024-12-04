#include "lists.h"

/**
 * dlistint_len - number of elements in a linked list_t list
 * @h: header of the list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}

	return (num);
}
