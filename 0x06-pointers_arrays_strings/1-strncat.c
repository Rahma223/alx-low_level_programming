#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to destnation input
 * @src: pouinter to souece input
 * @n: most number of btyes from @dest
 * return: @dest
*/



char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest function*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null termination
	 * if it contion n or more bytes
	*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null termonation dest*/
	dest[c + i] = '\0';

	return (dest);
}
