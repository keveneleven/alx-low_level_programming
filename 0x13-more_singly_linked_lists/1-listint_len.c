#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns number of elements in a linked list
 * @h: singly linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t m;

	m = 0;
	while (h != NULL)
	{
		h = h->next;
		m++;
	}
	return (m);
}
