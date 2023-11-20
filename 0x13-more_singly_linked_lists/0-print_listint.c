#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
while (h != NULL)
{
	printf("%d\n", h->data);
	node_count++;
	h = h->new;
}
return (node_count);
}
