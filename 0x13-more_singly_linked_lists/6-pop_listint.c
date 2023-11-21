#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function to delete the head of the node
 * @head: pointer to the first element in the list
 * Return: returns the head node’s data (n)
 * or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);

	return (number);


}
