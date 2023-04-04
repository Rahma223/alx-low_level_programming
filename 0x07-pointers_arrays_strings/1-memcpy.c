#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: memory area
 * @src: source
 * @n: length of src to be coped
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
