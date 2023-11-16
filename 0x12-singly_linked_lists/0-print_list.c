#include <stdio.h>
#include "lists.h"

/**
 * print_list - elements of a list
 * @h: the first element in the list
 * Return: return the elements of list_t
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		node_count++;
	}
	return (node_count);
}
