#include "lists.h"

/**
 * list_len - prints number of elements in the linked list
 * @h: single linked list
 * Return: length of single linked list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
