#include "lists.h"

/**
 * dlistint_len - count the number of node in a list
 * @h: head of list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint_len(const dlistint_t *h)
{
	size_t rtn = 0;
	dlistint_t *tmp;

	if (h != NULL)
	{
		tmp = h;
		while (tmp != NULL)
		{
			rtn++;
			tmp = tmp->next;
		}
	}
	return (rtn);
}
