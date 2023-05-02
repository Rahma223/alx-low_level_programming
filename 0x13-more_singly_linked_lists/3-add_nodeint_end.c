#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: pointer to the first node
 * @n: value of new node
 * Return:  the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listing_t *node;

	if (!head || !ptr)
		return (NULL);
	ptr->next = NULL;
	ptr->n = n;

	if (!*head)
		*head = ptr;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = ptr;
	}
	return (ptr);
}
