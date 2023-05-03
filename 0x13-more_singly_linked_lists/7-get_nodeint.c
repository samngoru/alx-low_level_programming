#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at given index in listint_t linked list.
 * @head: first node in the linked list
 * @index: index of node returned
 * Return: pointer to node returned, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
