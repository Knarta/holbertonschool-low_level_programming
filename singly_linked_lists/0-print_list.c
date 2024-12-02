#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: header of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (!current->str)
		{
			printf("[0] (nil)\n");
		}

		else
			printf("[%i] %s\n", current->len, current->str);
		num++;

		if (!current->next)
			break;

		current = current->next;
	}

	return (num);
}
