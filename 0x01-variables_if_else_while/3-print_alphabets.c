#include <stdio.h>
/**
 * main - print the alpabet in lower case and uppercase
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
putchar(c);
}
for (c = 'A' ; c <= 'Z' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
