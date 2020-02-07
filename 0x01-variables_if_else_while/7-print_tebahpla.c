#include <stdio.h>
/**
 * main - print the alpabet in lower case
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
char i;
for (i = 'z' ; i >= 'a' ; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
