#include "monty.h"
/**
 * add_function - Add the top two elements of the stack.
 * @stack: double pointer to the top of the stack.
 * @line_num: number.
 */
void add_function(stack_t **stack, unsigned int line_num)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
exit(EXIT_FAILURE);
}
(*stack)->next->n += (*stack)->n;

pop_function(stack, line_num);
}
