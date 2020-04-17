#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: the size 
 * @cmp: comparison fct
 *
 * Return: the index of the first founded element, (-1) otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
a = 0;
while (a < size)
{
if (cmp(array[i]))
return (a);
a++;
}
return (-1);
}
