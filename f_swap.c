#include "monty.h"
/**
 * f_swap - Swap the top two elements of the stack.
 * @stack: Pointer to pointer to the top of the stack
 * @line_num: Line number
 */
void f_swap(stack_t **stack, unsigned int line_num)
{
stack_t *temp;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
exit(EXIT_FAILURE);
}
temp = (*stack)->next;
(*stack)->next = temp->next;
if (temp->next != NULL)
temp->next->prev = *stack;
temp->prev = NULL;
temp->next = *stack;
(*stack)->prev = temp;
*stack = temp;
}
