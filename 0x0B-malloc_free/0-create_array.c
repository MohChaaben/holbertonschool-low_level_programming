#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - a function that creates an array of chars.
 * @size: the size of the char
 * @c: the char.
 * Return: a.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;
if (size == 0)
return (NULL);
a = malloc(sizeof(char) * size);
if (a == NULL)
return (NULL);
for (i = 0; i < size; i++)
a[i] = c;
return (a);
}
