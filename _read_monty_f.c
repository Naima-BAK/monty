#include "monty.h"
/**
 * read_monty_f - process & read Monty byte code file
 * @file: name of file
 */
void read_monty_f(const char *file)
{
FILE *f;
char *line = NULL;
size_t length = 0;
ssize_t r;
unsigned int line_num = 1;
stack_t *stack = NULL;
f = fopen(file, "r");
if (f == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", file);
exit(EXIT_FAILURE);
}
while ((r = getline(&line, &length, f)) != -1)
{
process_l(&stack, line, line_num);
line_num++;
}
free(line);
fclose(f);
}
