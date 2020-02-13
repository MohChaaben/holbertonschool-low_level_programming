#include "holberton.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number times the character _ should be printed.
 * Return: void.
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
_putchar ('\n');
_putchar ('_');
}
else
_putchar('\n');
}
