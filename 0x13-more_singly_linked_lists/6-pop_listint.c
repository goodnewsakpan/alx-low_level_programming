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
	int data;
	listint_t *temp;

	if (*head == NULL) 
		return (0);

	data = (*head)->n;
	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (data);


}
