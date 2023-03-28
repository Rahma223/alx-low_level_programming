#include "main.h"
/**
 *_strlen - the length of a string
 *@s: pointer
 *return: lrngth of string
*/
int _strlen(char *s)
{
int count;
for (count = 0; *s != '\0'; s++)
{
++count;
}
return (count);
}

