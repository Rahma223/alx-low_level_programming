#include <unistd.h>
#include "main.h"

/**
 * _putchar - a program that prints _putchar
 * @c: character to string
 * Return: 1 if success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
