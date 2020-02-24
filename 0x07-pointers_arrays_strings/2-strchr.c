#include "holberton.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: the character to search
 * Return: s
 */
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}
