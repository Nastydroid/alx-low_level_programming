#include "lists.h"
#include <stdlib.h>

/**
 * list_len - finds the number of nodes in a list
 *
 * @h: singly linked list
 *
 * Return: number of elements in a linked list
 *
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

