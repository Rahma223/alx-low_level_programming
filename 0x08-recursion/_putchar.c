#include "main.h"
/**
 * _putchar - print character
 * @c: charater
 * Return: 1if true, -1 if false
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
