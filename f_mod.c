#include "monty.h"
/**
 * f_mod - Compute the remainder of div of the second top element
 * by the top element
 * @stack: Pointer to pointer to the top of the stack
 * @line_num: Line number counter
 */
void f_mod(stack_t **stack, unsigned int line_num)
{
stack_t *f_top, *s_top;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
exit(EXIT_FAILURE);
}
f_top = *stack;
s_top = f_top->next;
if (f_top->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", line_num);
exit(EXIT_FAILURE);
}
s_top->n %= f_top->n;
*stack = s_top;
s_top->prev = NULL;
free(f_top);
}
