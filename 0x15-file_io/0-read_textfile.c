#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *read_textfile-  reads a text file and prints it to the stdo.
 *@filename: pointer to a string
 *@letters: byte count
 *Return: zero
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *s;
int a;
int k;
int h;
file = malloc(sizeof(char) * letters);
if (filename == NULL)
return (0);
if (s == NULL)
return (0);
a = open(filename, O_RDONLY);
if (a == -1)
return (0);
k = read(a, s, letters);
if (k == -1)
return (0);
h = write(STDOUT_FILENO, s, k);
if (h == -1)
return (0);
close(a);
free(s);
return (h);
}
