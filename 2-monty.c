#include "monty.h"


/**
 * pop_function - removes the top element of the stack
 * @stack_head: tp of double list.
 * @line_number: number of lines.
 * Return: nothing.
 */
void pop_function(stack_t **stack_head, unsigned int line_number)
{
if (!*stack_head)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
free_function(allData.stack_head);
exit(EXIT_FAILURE);
}

if ((*stack_head)->next == NULL)
{
free(*stack_head);
*stack_head = NULL;
}
else
{
*stack_head = (*stack_head)->next;
free((*stack_head)->prev);
(*stack_head)->prev = NULL;
}

}

