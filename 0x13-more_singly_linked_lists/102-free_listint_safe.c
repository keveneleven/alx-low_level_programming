#include "lists.h"
/**
 * free_listint -  frees a list
 * @h: singly linked list
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *current;
	size_t count = 0;

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		if (next >= current)
		{
			current->next = NULL;
			break;
		}
		free(current);
		current = next;
	}
	*h = NULL;
	return (count);
}
