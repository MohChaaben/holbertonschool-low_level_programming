#include "holberton.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a pointer points to a string
 * Return: the strin length.
 */
int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (1 + _strlen_recursion(s + 1));

else
{
return (0);
}
}
