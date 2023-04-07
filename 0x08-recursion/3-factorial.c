#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: number we get the factorial
 * Return: the factorila
 */

int factorial(int n)
{
	int i;

	if (n == 1)
	{
		return (1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
