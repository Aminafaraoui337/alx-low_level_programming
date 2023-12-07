#include "lists.h"

/**
 * print_dlistint - Prints elements of a dlistint_t.
 * @h: head.
 * Return: number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbnodes = 0;

	while (h)
	{
		nbnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nbnodes);
}
