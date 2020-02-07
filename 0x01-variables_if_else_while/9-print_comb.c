#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
int c;
for (c = 0; c < 10; c++)
{
putchar(c + '0');
if (c == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
