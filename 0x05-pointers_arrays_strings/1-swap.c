#include "main.h"
/**
 *swap_int - swep two numbers
 *@a: input paramter 1
 *@b: input paramter 2
 *return: nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
