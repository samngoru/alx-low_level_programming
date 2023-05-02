#include "lists.h"

/**
 * pop_listint - deletes listint_t head node
 * @head: pointer to linked list's first element
 * Return: the deleted data inside the element, otherwise 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

