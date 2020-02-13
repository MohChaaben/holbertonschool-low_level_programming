#include "holberton.h";
/**
 * more_numbers - function that prints 10 times f 0-14, followed by a new L.
 * @void
 * Return: void.
 */
void more_numbers(void);
{
int i, s, k, l;
for (i = 0; i <= 9; i++)
{
for (s = 0; s <= 14; s++)
{
k = s / 10;
l = s % 10;
if (k > 0)
_putchar (k + '0');
_putchar (l + '0');
}
_putchar ("\n");
}
}
