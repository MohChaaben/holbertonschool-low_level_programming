#include "holberton.h"
/**
 * _strstr -  a function that locates a substring.
 * @haystack: string to be scanned
 * @needle: substring
 * Return: Description of the returned value
 */
char *_strstr(char *haystack, char *needle)
{
char *b;
char *a = needle;
for ( ; *haystack != '\0' ; haystack++)
{
for (b = haystack ; *needle != '\0' ; needle++)
if (*b == *needle)
y++;
else
{
haystack = b;
needle = a;
break;
}
if (*needle == '\0')
return (haystack);
}
return (0);
}
