#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - elements of a list
 * @h: the first element in the list
 * Return: return the elements of list_t
 *
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
/**
 * main - Entry point
 * Return: return 0 on success
 *
 */

int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	printf("\n");
	free(new->str);
	new->str = NULL;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	free(new);
	return (0);
}
