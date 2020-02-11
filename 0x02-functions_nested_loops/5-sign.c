#include "holberton.h"
/**
 * print_sign -  a function that prints the sign of a number.
 * @n: the number
 *Return: 1 if n>0, 0 if n=0,-1 if n<0.
 */
int print_sign(int n)
{
int x = 0;
if (n > 0)
{
x = 1;
_putchar('+');
}
else if (n < 0)
{
x = -1;
_putchar('-');
}
else
_putchar('0');
return (x);
}
