#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds anew node at the beginning of a list
 * @n: a variable
 * @head: pointer to the first element of the node
 * Return: return pointer to the first element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
