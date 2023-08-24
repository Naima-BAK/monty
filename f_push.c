#include "monty.h"
/**
 * f_push - push elements onto stack
 * @stack: pointer to pointer to the top of stack
 * @line_num: number of the line being executed
 */
void f_push(stack_t **stack, unsigned int line_num)
{
stack_t *new = malloc(sizeof(stack_t));
char *global_data;
int value;
UNUSED(line_num);
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
global_data = strtok(NULL, " \t\n");
if (global_data == NULL)
{
fprintf(stderr, "Error: Missing value to push\n");
exit(EXIT_FAILURE);
}
value = atoi(global_data);
if (value == 0 && strcmp(global_data, "0") != 0)
{
fprintf(stderr, "Error: Invalid value to push\n");
exit(EXIT_FAILURE);
}
new->n = value;
new->prev = NULL;
new->next = *stack;
if (*stack != NULL)
(*stack)->prev = new;
*stack = new;
}
