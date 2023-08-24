#include "monty.h"
/**
 * swap_function - Swap the top two elements of the stack.
 * @stack: double pointer to the top of the stack
 * @line_num: number.
 */
void swap_function(stack_t **stack, unsigned int line_num)
{
stack_t *ptr;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
exit(EXIT_FAILURE);
}

ptr = (*stack)->next;
(*stack)->next = ptr->next;
if (ptr->next != NULL)
ptr->next->prev = *stack;
ptr->prev = NULL;
ptr->next = *stack;

(*stack)->prev = ptr;
*stack = ptr;
}
