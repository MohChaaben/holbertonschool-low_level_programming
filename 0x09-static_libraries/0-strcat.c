#include "holberton.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: the string to concatenate on.
 * @src: the string to concatenate.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
  int i, j;
  for (i = 0; dest[i]; i++)
    ;
  for (j = 0; src[j]; j++)
    {
      dest[i] = src[j];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
