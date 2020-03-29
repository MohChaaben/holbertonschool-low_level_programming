#include <stdio.h>
/**
 *main - entry piont
 *Description:  prints the numbers from 00 to 99
 *Return: 0
 */
int main(void)
{
int i ,j;
for (i = 1; i < 11; i++)
{
for (j = i ; j < 10; j++)
{
putchar(i - 1 + '0');
putchar(j + '0');
if (i == 9 && j == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
