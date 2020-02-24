#include "holberton.h"
/**
 **_strpbrk - function that searches a string for any of a set of bytes
 *@s: string to be scanned.
 *@accept: string containing characters to match
 *Return: a pointer to the byte in s , otherwise return NULL
 */

char *_strpbrk(char *s, char *accept)
{
int a, b;
char *h;
a = 0;
while (s[a] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if (accept[b] == s[a])
{
h = &s[a];
return (h);
}
b++;
}
a++;
}
return (0);
}
