#include "holberton.h"
/**
 * puts2 - a function that prints every other character of a string.
 * @str: the fuckin string
 */
void puts2(char *str)
{
int i = 0, j = 0;
for (j = 0; str[j]; j++)
;
for (i = 0; i < j; i += 2)
{
_putchar (str[i]);
}
_putchar ('\n');
}
