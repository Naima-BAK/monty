#include "monty.h"


/**
 * swap_function - swaps the top two elements of the stack.
 * @stack_head: tp of double list.
 * @line_number: number of lines.
 * Return: nothing.
 */
void swap_function(stack_t **stack_head, unsigned int line_number)
{
stack_t *stack_temp;

if (!*stack_head || (*stack_head)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
free_function(allData.stack_head);
exit(EXIT_FAILURE);
}
stack_temp = *stack_head;
stack_temp->prev = stack_temp->next;
if ((*stack_head)->next->next == NULL)
stack_temp->next = NULL;
else
{
stack_temp->next = stack_temp->next->next;
stack_temp->next->prev = *stack_head;
}
*stack_head = stack_temp->prev;
(*stack_head)->prev = NULL;
(*stack_head)->next = stack_temp;
}

