#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - fun int
 * @s: var op
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int a = 0;
while ((ops + a)->op)
{
if (*s == *(ops + a)->op)
return ((ops + a)->f);
++a;
}
printf("Error\n");
exit(99);
}
