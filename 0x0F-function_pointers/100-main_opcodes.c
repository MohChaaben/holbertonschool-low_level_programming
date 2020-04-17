#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function.
 * @argc: var argc
 * @argv: var argv
 * Return: 0
 *
 */
int main(int ac, char **av)
{
int *FT;
int a;

FT = (int *) main;
if (ac != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(av[1]) < 0)
{
printf("Error\n");
exit(2);
}
for (a = 0; a < atoi(av[1]); a++)
{
printf("%2X\n", *(FT + a));
}
}
