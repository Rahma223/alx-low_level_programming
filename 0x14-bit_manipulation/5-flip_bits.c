#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * @n: first number
 * @m: second number
 * Return: number of bits to flip to convert numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		if (x & 1ul)
			count++;
		x = x >> 1;
	}
	return (count);
}
