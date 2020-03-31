#include "holberton.h"
/**
 *append_text_to_file- fct appends a text at the end
 *@filename: filename
 *@text_content: content
 *Return: -1/1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int a;
int k;
int h;
if (filename == NULL)
return (-1);
a = open(filename, O_WRONLY | O_APPEND);
if (a == -1)
return (-1);
if (text_content != NULL)
{
for (h = 0; text_content[h] != '\0'; h++)
;
k = write(a, text_content, h);
}
if (k == -1)
return (-1);
close(a);
return (1);
}
