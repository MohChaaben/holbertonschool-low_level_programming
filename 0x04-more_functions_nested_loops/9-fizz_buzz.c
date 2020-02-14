#include "stdio.h"
/**
 * main - a program of muliples of 3 Fizz, 5 Buzz, 3 and 5 FizzBuzz
 * @void: No param
 * Return: 0.
*/
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
putchar(' ');
}
putchar('\n');
return (0);
}
