#include "monty.h"

/**
 * sub_function - subtracts the top of the double list.
 *  from the second.
 * @stack_head: the top.
 * @line_number: number of lines.
 * Return: nothing.
 */
void sub_function(stack_t **stack_head, unsigned int line_number)
{
int number = 0;

if (!*stack_head || (*stack_head)->next == NULL)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
free_function(allData.stack_head);
exit(EXIT_FAILURE);
}
number = (*stack_head)->n;
pop_function(&allData.stack_head, allData.line_num);
(*stack_head)->n -= number;

}
