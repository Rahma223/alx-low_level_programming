#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the square
 * @n: number we get the root
 * @i: iterate number
 * Return: value from function sqrt
 */

int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate thr natural square root
 * @n: number to calc the square root
 * @i: iterate number
 * Return: thr natural square root
 */

int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
	{
	return (-1);
	}
	else if (sq == n)
	{
	return (i);
	}
	else
	{
	return (_sqrt(n, i + 1));
	}
}
