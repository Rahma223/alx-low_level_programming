#include <unistd.h>
/**
 * _putchar - write the charcter c to pointer
 * @c: character to pointer
 * Return: on success 1, on erorr -1
 */
int _putchar(char c)
{
	return ((write(1, &c, 1)));
}
