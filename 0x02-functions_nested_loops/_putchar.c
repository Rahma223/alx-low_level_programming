#include <unistd.h>
#include "main.h"

/**
 * _putchar - a program that prints _putchar, followed by a new line.
 * @c: the character to pointer
 * Return: 1 if success, 0 isnot
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
