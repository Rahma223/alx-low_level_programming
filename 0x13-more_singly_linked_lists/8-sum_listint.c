#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: pointer to the fist node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
