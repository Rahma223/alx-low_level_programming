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

	if (!head || !ptr)
		return (NULL);
	ptr->next = NULL;
	ptr->n = n;
	while (head->next != NULL)
		head = head->next;
	head->next = ptr;
	return (ptr);
}
