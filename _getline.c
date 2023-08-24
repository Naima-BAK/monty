#include "monty.h"
/**
 * getline - function that get line
 * @lineptr: double pointer to line
 * @n: nums of lines
 * @stream: pointer
 * Return: 1 or -1
 */
ssize_t getline(char **lineptr, size_t *n, FILE *stream)
{
size_t bufsize = 0;
int current_char;
char *temp = realloc(*lineptr, *n);
if (lineptr == NULL || n == NULL || stream == NULL)
return (-1);
if (*lineptr == NULL || *n == 0)
{
*n = 128;
*lineptr = malloc(*n);
if (*lineptr == NULL)
return (-1);
}
while ((current_char = fgetc(stream)) != '\n' && current_char != EOF)
{
if (bufsize + 1 >= *n)
{
*n *= 2;
if (temp == NULL)
{
free(*lineptr);
return (-1);
}
*lineptr = temp;
}
(*lineptr)[bufsize++] = (char)current_char;
}
if (bufsize == 0 && current_char == EOF)
return (-1);
(*lineptr)[bufsize] = '\0';
return (bufsize);
}
