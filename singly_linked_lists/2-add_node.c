#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer which the pointer to new node
 * @str: character pointer
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
