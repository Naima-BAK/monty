#include "monty.h"
/**
 * pop_function - Remove the top of the stack.
 * @stack: double pointer to the top of the stack.
 * @line_num: an integer.
 * Return: nothing.
 */
void pop_function(stack_t **stack, unsigned int line_num)
{
stack_t *ptr;
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
exit(EXIT_FAILURE);
}
ptr = *stack;
*stack = (*stack)->next;
free(ptr);
}
