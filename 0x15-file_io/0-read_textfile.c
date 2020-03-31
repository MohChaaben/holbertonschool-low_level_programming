#include "holberton.h"
/**
 *read_textfile- reads a text file
 *@filename: char
 *@letters: size
 *Return: zero
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *s;
int a;
int k;
int h;
s = malloc(sizeof(char) * letters);
if (s == NULL)
return (0);
if (filename == NULL)
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
