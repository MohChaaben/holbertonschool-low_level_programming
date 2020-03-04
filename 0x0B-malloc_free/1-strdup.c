#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Write a function that returns a pointer to a newly allocated .
 * @str: a pointer point to a string
 * Return: char.
 */
char *_strdup(char *str)
{
int i, j;
char *p;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
p = malloc(sizeof(char) * i + 1);
if (p == NULL)
return (NULL);
for (j = 0; j < i + 1; j++)
p[j] = str[j];
p[j] = '\0';
return (p);
}
