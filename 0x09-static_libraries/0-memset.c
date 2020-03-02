#include "holberton.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: memory
 * @b: the char to constant 
 * @n: the number of b repeated in s.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++)
    {
      s[i] = b;    
    }
  return(s);
}
