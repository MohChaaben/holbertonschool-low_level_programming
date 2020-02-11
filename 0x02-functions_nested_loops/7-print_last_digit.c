#include "holberton.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 *@x: integer.
 *Return: r.
 */
int print_last_digit(int x)
{
int r;
r = x % 10;
if (r < 0)
{
_putchar(r * -1 + '0');
return (r * -1);
}
else if (x == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(r + '0');
return (r);
}
}
