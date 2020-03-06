#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat -  function that concatenates two strings.
 *@s1: param
 *@s2:param
 *@n : number of char of s2 to concatenate
 *Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int a, b, c;
unsigned int d;
b = 0;
a = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[b])
b++;
while (s2[a])
a++;
if (n >= a)
n = a;
p = malloc(n + b + 1);
if (p == NULL)
return (NULL);
for (d = 0; d < b; d++)
p[d] = s1[d];
b = 0;
for (; d < b + n; d++)
{
p[d] = s2[c];
c++;
}
p[d] = '\0';
return (p);
}
