#include "monty.h"
/**
 * process_l - Process line of code
 * @stack: pointer to pointer to the top of stack
 * @line: line of monty code
 * @line_num: number of the current line
 */
void process_l(stack_t **stack, char *line, unsigned int line_num)
{
char *operation_code;
void (*function)(stack_t **stack, unsigned int line_num);
while (*line == ' ' || *line == '\t')
line++;
if (*line == '#')
return;
operation_code = strtok(line, " \t\n");
if (operation_code == NULL)
return;
function = get_opc(operation_code);
if (function == NULL)
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_num, operation_code);
exit(EXIT_FAILURE);
}
function(stack, line_num);
}
