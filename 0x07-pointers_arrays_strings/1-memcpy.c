#include "holberton.h"
/**
 * _memcpy -  a function that copies memory area.
 * @dest: memory area
 * @src: the stirng to have cpy
 * @n: the number of src copies repeated in dest.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
