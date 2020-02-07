#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - fucntion main will print the alphabet in lowercase
 *Return: 0
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
