#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a given
 * position
 * @head: The first element of a node
 * @idx: index given by main
 * @n: number to insert in the node
 * Return: @new  address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int place = 1;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (*head == 0)
		return (NULL);
	tmp = *head;
	while (place < idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		place++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
