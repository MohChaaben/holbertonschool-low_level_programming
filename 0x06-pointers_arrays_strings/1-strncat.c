#include "holberton.h"
/**
 * _strncat - a function that concatenates two strings but..
 * @dest: the first string.
 * @src: the second string.
 * @n: the number of characters to concatenates from src.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i]; i++)
;
for (j = 0; src[j] && n > 0 ; j++)
{
dest[i] = src[j];
n--;
i++;
}
dest[i] = '\0';
return (dest);
}
