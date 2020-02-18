#include "holberton.h"
/**
 * swap_int - a function that swap 2 integers.
 * @a: the first pointer.
 * @b: the 2nd pointer.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
