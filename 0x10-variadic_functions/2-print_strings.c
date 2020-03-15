#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings.
 *@n : the number of strings passed to the function
 *@separator: strin
 * Return: void
 */
void print_strings(const char *separator, const unsignedint n, ...)
{
va_list ap;
unsigned int a;
char *strin;
va_start(ap, n);
for (a = 0; n > a; a++)
{
ch = va_arg(ap, strin *);
if (strin == NULL)
printf("(nil)");
else
printf("%s", ch);
if ((a < n - 1) && (separator != NULL))
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
