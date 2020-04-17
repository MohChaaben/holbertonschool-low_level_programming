#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: array
 * @size: size
 * @action: action
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;
if (array == NULL || action == NULL)
return;
a = 0;
while (a < size)
{
action(array[a]);
a++;
}
}
