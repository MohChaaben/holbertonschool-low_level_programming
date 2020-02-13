#include "holberton.h";
/**
 * print-line - a function that draws a straight line in the terminal.
 * @n: number times the character _ should be printed.
 * Return: void.
 */
void print_line(int n);
{
inti i;
for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar ("\n");
}
else
{
_putchar ("_");
}
}
