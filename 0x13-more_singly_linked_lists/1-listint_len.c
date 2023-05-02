#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked list listint_t
 * @h: linked list of type listint_t that will be traversed
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

