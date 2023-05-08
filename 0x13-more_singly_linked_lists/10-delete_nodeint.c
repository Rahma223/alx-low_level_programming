#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * @head: pointer to the first node
 * @index: index to the deleted node
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *del_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	ptr = *head;
	while (ptr)
	{
		if (i == index)
		{
			del_node->next = ptr->next;
			free(ptr);
			return (1);
		}
		i++;
		del_node = ptr;
		ptr = ptr->next;
	}
	return (-1);
}
