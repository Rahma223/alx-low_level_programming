#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - a function that check thr number is prime
 * @n: number we checked
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - a function that check thr number is prime
 * @n: the number we checked
 * @i: other number
 * Return: 1 if number prime ,0 if not
 */

int check_prime(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
	return (0);
	}
	else
	{
	return (check_prime(n, i + 1));
	}
}
