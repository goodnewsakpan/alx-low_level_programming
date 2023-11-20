#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: pointer to the first element
 *
 * Return: return the count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

