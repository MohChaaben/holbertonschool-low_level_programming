#include "holberton.h"
/**
 * puts_half - a function that prints the second half of a string.
 * @str: the input
 */
void puts_half(char *str)
{
int l, k, a, b;
a = 0;
for (l = 0; str[l] != '\0'; l++)
a = a + 1;
b = a;
if (a % 2 != 0)
{
a = (a - 1) / 2;
a = a + 1;
}
else
a = a / 2;
for (k = a; k < b ; k++)
_putchar (*(str + k));
_putchar ('\n');
}
