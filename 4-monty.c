#include "monty.h"


/**
 * add_function - adds the top two elements of the stack.
 * @stack_head: tp of double list.
 * @line_number: number of lines
 * Return: nothing.
 */
void add_function(stack_t **stack_head, unsigned int line_number)
{
int number = 0;

if (!*stack_head || (*stack_head)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
free_function(allData.stack_head);
exit(EXIT_FAILURE);
}

number = (*stack_head)->n;
pop_function(&allData.stack_head, allData.line_num);
(*stack_head)->n += number;

}
