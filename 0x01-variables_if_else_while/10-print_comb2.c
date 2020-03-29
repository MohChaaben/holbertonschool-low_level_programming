#include <stdio.h>
/**
 *main - entry piont
 *Description:  prints the numbers from 00 to 99
 *Return: 0
 */
int main(void)
{
int a, b, c;
for (a = 0 ; a < 100 ; a++)
{
b = a / 10;
putchar(b + '0');     
c = a % 10;
putchar(c + '0');
if (a < 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
