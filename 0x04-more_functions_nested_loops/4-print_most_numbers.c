#include "holberton.h";
/**
 * print_most_numbers - same with pint-numbers but don't print 2 and 4.
 * @void
 * Return: void.
 */
void print_most_numbers(void);
{
int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar (i + '0');
}
}
_putchar ("\n");
}
