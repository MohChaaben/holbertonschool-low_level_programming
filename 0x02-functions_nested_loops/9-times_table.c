#include "holberton.h"

/**
 * a function that prints the 9 times table, starting with 0.
 * @void: no parameters.
 * Return: No
 */
void times_table(void)
{
int i, j, k, Fd, Ld;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 10; i++)
{
k = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (k >= 10)
{
Fd = k / 10;
Ld = k % 10;
_putchar(Fd + '0');
_putchar(ld + '0');
}
else if (k < 10 && j != 0)
{
Ld = k % 10;
_putchar(' ');
_putchar(Ld + '0');
}
else
{
Ld = k % 10;
_putchar(Ld + '0');
}
}
_putchar('\n');
}
}
