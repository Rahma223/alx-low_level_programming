#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: 2d Array
 * @size: size of array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, s = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s);
	printf("%d\n", s2);
}
