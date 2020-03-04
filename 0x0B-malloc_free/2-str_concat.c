#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first pointer point to a strin
 * @s2: 2nd pointer point to a strin
 * Return: char.
 */
char *str_concat(char *s1, char *s2)
{
int i, j, a, b;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
;
for (j = 0; s2[j]; j++)
;
p = malloc(i + j + 1);
if (p == NULL)
return (NULL);
for (a = 0; s1[a]; a++)
p[a] = s1[a];
for (b = 0; s2[b]; b++)
{
p[a] = s2[b];
a++;
}
return (p);
}
