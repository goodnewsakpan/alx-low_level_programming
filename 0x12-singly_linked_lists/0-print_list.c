#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - elements of a list
 * @h: the first element in the list
 * Return: return the elements of list_t
 *
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", node_count, h->str);
		}

		node_count++;
		h = h->next;
	}
	return (node_count);
}
/**
 * main - Entry point
 * Return: return 0 on success
 *
 */

int main(void)
{
	list_t node1 = {"Abc", NULL};
	list_t node2 = {"def", NULL};
	list_t node3 = {NULL, NULL};

	node1.next = &node2;
	node2.next = $node3;

	size_t count = print_list(&node1);

	printf("Number of nodes: %lu\n", count);

	return (0);
}
