#include "lists.h"

/**
 * dlistint_len - Counts the number of nodes in a linked dlistint_t list.
 * @h: headd
 * Return: number of nodes in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
