#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list_t list.
 * @head: pointer which the pointer to new node
 * @n: constante integer
 * Return: the number of nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_end;
	dlistint_t *temp;


	new_node_end = malloc(sizeof(dlistint_t));

	if (new_node_end == NULL)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		new_node_end->prev = NULL;
		return (new_node_end);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node_end;
	new_node_end->prev = temp;

	return (new_node_end);
}
