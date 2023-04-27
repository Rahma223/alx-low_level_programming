#include "lists.h"

void _conctructor(void) __attribute__((constructor));

/**
 * _conctructor - executes before main()
 * Return: void
 */

void _conctructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
