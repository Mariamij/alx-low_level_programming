#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns then number of elements in a list.
 * @h: pointer to the list_t list
 * Return: number of elements in h.
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
