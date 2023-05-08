#include "main.h"

void print_diagonal(int n)
{
int pos, sp;
if (n <= 0)
_putchar('\n');
else
{
for (pos = 1; pos <= n; pos++)
{
for (sp = 1; sp <= pos; sp++)	
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
