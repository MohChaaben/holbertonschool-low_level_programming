#include "holberton.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * return: n. 
 */
unsigned int _strspn(char *s, char *accept)
{
  char *a = accept;
  unsigned int n = 0;
  for (; *s != '\0' ; s++)
    {
      for (accept = a; *accept != '\0' ; accept++)
	if (*s == *accept)
	  {
	    n++;
	    break;
	  }
      if (accept[0] == '\0')
	return (n);
    }
  return (n);
}
