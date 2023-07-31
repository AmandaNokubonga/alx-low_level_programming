#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 * calculate number of elements in the linked list
 * Traverse the linked list until the end 0
 * Increase count for each node
 * Move to the next node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}

return (nodes);
}

