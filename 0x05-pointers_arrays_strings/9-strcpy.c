#include "holberton.h"
/**
 * _strcpy - a function that copies the string .
 * @dest: the string to copy on.
 * @src: the string to copy
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
