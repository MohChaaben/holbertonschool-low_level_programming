#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: string to reverse
 */
void rev_string(char *s)
{
int i, j;
char h;
for (i = 0; s[i]; i++)
;
for (j = 0; j <= i / 2; j++)
{
h = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = h;
}
}
