#include "monty.h"
/**
 * f_pop - Remove the top element of the stack
 * @stack: Pointer to pointer to the top of the stack
 * @line_num: Line number being executed.
 */
void f_pop(stack_t **stack, unsigned int line_num)
{
stack_t *temp;
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
exit(EXIT_FAILURE);
}
temp = *stack;
*stack = (*stack)->next;
free(temp);
}
