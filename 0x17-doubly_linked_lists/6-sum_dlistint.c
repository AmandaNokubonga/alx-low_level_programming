#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data in a doubly linked list
 *
 * @head: head of the list
 * Return: he sum of the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
