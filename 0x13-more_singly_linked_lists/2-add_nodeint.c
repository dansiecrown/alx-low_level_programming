#include "lists.h"

/**
 * add_nodeint-new node will be added at the beginning of cont`listint_t` list
 * @head: it is the pointer to the head node (double)
 * @n: the int value to be stored in the new node
 * Return: Address of new element or 0  if it  fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hold;
	listint_t *new;

	hold = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (hold == NULL)
		new->next = NULL;
	else
		new->next = hold;

	return (new);
}
