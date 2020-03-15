#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers.
 *@n :  the number of integers passed to the function
 *@separator: strin
 * Return: void
 */
void print_numbers(const char *separator, const unsignedint n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; n > i; i++)
{
printf("%d", va_arg(ap, int));
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
