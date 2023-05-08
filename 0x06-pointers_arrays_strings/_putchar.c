#include <unistd.h>
/**
 *_putchar - write the charckter to stdout
 *@c: the charcter to pointer
 *return: on secces 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

