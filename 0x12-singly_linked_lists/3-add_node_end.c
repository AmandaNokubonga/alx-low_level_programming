#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: A combined  pointer to the list_t list
 * @str: string has put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (0);

	new->str = strdup(str);
	new->len = len;
	new->next = 0;

	if (*head == 0)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
