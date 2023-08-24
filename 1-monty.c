#include "monty.h"
/**
 * pint_function - func to print the value at the top of slack
 * @stack: double pointer to the top of the stack.
 * @line_num: an integer counter.
 */
void pint_function(stack_t **stack, unsigned int line_num)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty \n", line_num);
exit(EXIT_FAILURE);
}

printf("%d\n", (*stack)->n);
}
