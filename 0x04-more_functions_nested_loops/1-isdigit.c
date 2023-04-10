#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: integer to string
 * Return: 1 if true
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
