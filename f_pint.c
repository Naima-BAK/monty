#include "monty.h"
/**
 * f_pint - func to print the value at the top of slack
 * @stack: Pointer to pointer to the top of the stack.
 * @line_num: Line number being executed.
 */
void f_pint(stack_t **stack, unsigned int line_num)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
