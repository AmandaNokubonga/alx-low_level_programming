#include "lists.h"

/**
 * add_dnodeint_end - Appends a new node to the 
 * end of a doubly linked list
 *
 * @head: The head of the list.
 * @n: The value of the new node.
 * @Return: The address of the new node, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
