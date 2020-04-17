#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name
 * @f: the function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
name = "";
if (f == NULL)
return;
f(name);
}
