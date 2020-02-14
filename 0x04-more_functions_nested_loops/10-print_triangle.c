#include "hoberton.h"
/**
 * print_triangle - function that prints a triangle using the character #.
 * @size: Triangle's size.
 */

void print_triangle(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
for (b = size; b >= 1; b--)
if (a < b)
_putchar(' ');
else
_
_putchar('\n');
}
}
}
