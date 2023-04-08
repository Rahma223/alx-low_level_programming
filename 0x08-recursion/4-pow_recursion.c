#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x power y
 * @x: number we get the power
 * @y: power of number
 * Return: power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
