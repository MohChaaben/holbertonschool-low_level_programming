#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet lettersX10
 * Return: void
 */
void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j <= 9; j++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
