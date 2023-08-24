#include "monty.h"


/**
 * mod_function - computes the rest of the division of the second
 *  top element of the stack by the top element of the stack.
 * @stack_head: the top.
 * @line_number: number of lines.
 * Return: nothing.
 */
void mod_function(stack_t **stack_head, unsigned int line_number)
{
int number = 0;

if (!*stack_head || (*stack_head)->next == NULL)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
free_function(allData.stack_head);
exit(EXIT_FAILURE);
}

if ((*stack_head)->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
free_function(allData.stack_head);
exit(EXIT_FAILURE);
}

number = (*stack_head)->n;
pop_function(&allData.stack_head, allData.line_num);
(*stack_head)->n %= number;
}
