#include "lists.h"

/**
 * add_nodeint - Write a function that adds a new node at the first
 * @head: pointer to the new node
 * @n: the date of node
 * Return: pointer to the first node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = head;
	head = ptr;
	return (head);
}
