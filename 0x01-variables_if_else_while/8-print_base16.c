#include <stdio.h>
/**
 * main - print the alpabet in lower case and uppercase
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
int i;
char ch;
for (i = 0 ; i < 10 ; i++)
{
putchar(i);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
