#include "main.h"

/**
 * print_binary - a function that prints the binary representation
 * @n: the number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, pri = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			pri++;
		}
		else if (pri)
			_putchar('0');
	}
	if (!pri)
		_pitchar('0');
}
