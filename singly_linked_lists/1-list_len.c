#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 * @h: header of the list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}

	return (num);
}
