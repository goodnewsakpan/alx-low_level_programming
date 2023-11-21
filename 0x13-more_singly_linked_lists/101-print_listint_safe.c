#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the first element in the list
 * Return: the number
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *temp;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
				break;
		}
	}

	return (count);
}
