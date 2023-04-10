#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: check input of function
 * Return: return 1 if c is lower
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
