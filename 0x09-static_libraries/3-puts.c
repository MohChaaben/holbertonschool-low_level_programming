#include "holberton.h"
/**
 * _puts - a function that prints a string, followed by a new line.
 * @str: the string to print.
 */
void _puts(char *str)
{
  int i;
  for (i = 0; str[i]; i++)
    {
      _putchar (str[i]);
    }
  _putchar ('\n');
}
