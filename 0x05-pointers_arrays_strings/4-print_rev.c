#include "holberton.h"
/**
 * print_rev - function prints a string in reverse followed by a new line.
 * @s:the printed string.
 */
void print_rev(char *s)
{
int i;
int j;
for (i = 0; s[i]; i++)
{
}
for (j = i - 1; j >= 0; j--)
{
_putchar (s[j]);
}
_putchar ('\n');
}
