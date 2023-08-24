#include "monty.h"
/**
 * f_add - Add the top two elements of the stack.
 * @stack: Pointer to pointer to the top of the stack.
 * @line_num: Line number
 */
void f_add(stack_t **stack, unsigned int line_num)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
exit(EXIT_FAILURE);
}
(*stack)->next->n += (*stack)->n;
f_pop(stack, line_num);
}
