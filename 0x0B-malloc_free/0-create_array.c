#include "main.h"

/**
 * *create_array - a function that creates an array of chars
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == 0)
		return (0);
	while (size--)
		s[size] = c;
	return (s);
}
