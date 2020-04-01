#include <stdio.h>
#include <stdlib.h>
/**
 *main - fct that prints all possible different combinations of two digits
 *Return: zero
 */

int main(void)
{
int i;
int j;
int k;
i = 48;
j = 49;
k = 50;
while  ((i < 56) && (j < 57) && (k < 58))
{
putchar(i);
putchar(j);
putchar(k);
if ((i == 55) && (j == 56) && (k == 57))
{
putchar('\n');
k++;
j++;
i++;
}
else
{
putchar(44);
putchar(32);
if (k < 57)
{
k++;
}
else if ((j < 56) && (k == 57))
{
++j;
k = 1 + j;
}
else
{
++i;
j = 1 + i;
k = 1 + j;
}
}
}
return (0);
}
