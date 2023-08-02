#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print all elements of a `listint_t` list.
 * @h: Linked list head.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
