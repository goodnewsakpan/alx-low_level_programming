#include "lists.h"
/**
 * sum_listint - function that returns the sum
 * of all data(n) in a linked list
 * @head: the first element of a node
 * Return: @count is the sum of n data
 */
int sum_listint(listint_t *head)
{
	unsigned int count = 0;

	if (!head)
		return (0);
	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
