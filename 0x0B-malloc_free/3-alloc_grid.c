#include "main"

/**
 * **alloc_grid -  a function that returns a pointer to a 2 dimensional array
 * @width: int string
 * @height: int string
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
int **tab, i, j;

tab = malloc(sizeof(*tab) * heigth);

if (width <= 0 || heigth <= 0 || tab == 0)
{
return (NULL);
}
else
{
for (i = 0; i < heigth; i++)
{
tab[i] = malloc(sizeof(**tab) * width);
if (tab[i] == 0)
{
while (i--)
free(tab[i]);
free(tab);
return (NULL);
}
for (j = 0; j < width; j++)
tab[i][j] = 0;
}
}
return (tab);
}
