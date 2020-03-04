#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of integers.
 * @width: parameter
 * @hight: parameter
 * Return: int
*/
int **alloc_grid(int width, int height)
{
int i;
int **p;
if (height <= 0 || width <= 0)
return (NULL);
else
{
p = malloc (height * sizeof(int *));
if ( p == NULL)
return (NULL);
for (i = 0; i < height; i++);
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
while (i >= 0)
{
free (p[i]);
i--;
}
free (p);
return (NULL);
}
}
return (p);
}
}
