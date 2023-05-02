#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;


	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
