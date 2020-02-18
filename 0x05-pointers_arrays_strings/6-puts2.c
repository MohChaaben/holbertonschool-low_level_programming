#include "holberton.h"
/**
 * puts2 - a function that prints every other character of a string.
 * @str: the fuckin string
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i]; i += 2)
{
_putchar (str[i]);
}
_putchar ('\n');
}
