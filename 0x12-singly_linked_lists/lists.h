#ifndef _LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct list_t - single linked list
 * @str: string
 * @len: length of string
 * @next: points to the next node
 *
 * Description: single linked list node structure
 */
struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
};
typedef struct list_t list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
