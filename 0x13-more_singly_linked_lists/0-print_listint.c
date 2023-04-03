#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints elements of listint_t list
 * @h: singly linked list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t m;

	m = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
