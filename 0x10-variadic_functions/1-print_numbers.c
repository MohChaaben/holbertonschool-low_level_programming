#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - variadic fun
 *@n : var
 *@separator: var
 * Return: print all numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int b;
va_list lst;
va_start(lst, n);
for (b = 0; b < n - 1 ; b++)
{
printf("%d", va_arg(lst, int));
if (separator != NULL)
printf("%s", separator);
}
printf("%d", va_arg(lst, int));
va_end(lst);
printf("\n");
}
