#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a listint_t
 * @head: pointer to the node
 * Return: value of node deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (!head || !*head)
		return (0);
	ptr = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
