#include "monty.h"
/**
 * f_mul - Multiply the second top element with the top element
 * @stack: Pointer to pointer to the top of the stack.
 * @line_num: Line number counter
 */
void f_mul(stack_t **stack, unsigned int line_num)
{
stack_t *f_top, *s_top;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't mul, stack too short\n", line_num);
exit(EXIT_FAILURE);
}
f_top = *stack;
s_top = f_top->next;
s_top->n *= f_top->n;
*stack = s_top;
s_top->prev = NULL;
free(f_top);
}
