#include "main.h"

/**
 * *_strdup -  a function that returns a pointer
 * @str: string to pointer
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	/*+1 on the size puts the end of string*/
	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}
