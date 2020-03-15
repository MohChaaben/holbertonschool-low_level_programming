#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *@n : parameter
 * Return: zero
 */
int sum_them_all(const unsigned int n, ...)
{
va_list c;
unsigned int a;
int somme = 0;
if (n == 0)
return (0);
va_start(c, n);
for (a = 0; a < n; a++)
somme = somme + va_arg(c, int);
va_end(c);
return (somme);
}
