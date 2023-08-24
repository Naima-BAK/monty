#include "monty.h"

/**
 * f_pchar - the pchar opcode
 * @stack: Double pointer to the stack
 * @line_num: Line number being executed
 */
void f_pchar(stack_t **stack, unsigned int line_num)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
exit(EXIT_FAILURE);
}
if ((*stack)->n < 0 || (*stack)->n > 127)
{
fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
exit(EXIT_FAILURE);
}
printf("%c\n", (*stack)->n);
}
