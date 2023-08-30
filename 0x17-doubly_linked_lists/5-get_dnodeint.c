#include "lists.h"

/**
 * get_dnodeint_at_index - turns the nth node
 * of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the node
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
