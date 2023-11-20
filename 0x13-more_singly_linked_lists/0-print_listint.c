#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function to print all elements
 * @h: pointer to the first element
 * Return: return node count
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);

}
