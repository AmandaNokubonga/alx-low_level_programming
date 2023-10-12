#include "lists.h"

/**
 * print_dlistint - print all element in a double linked list
 * @h: head of list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t rtn = 0;
	dlistint_t *tmp;

	if (h != NULL)
	{
		tmp = h;
		while (tmp != NULL)
		{
			rtn++;
			printf("%d", tmp->n);
			tmp = tmp->next;
		}
	}
	return (rtn);
}
