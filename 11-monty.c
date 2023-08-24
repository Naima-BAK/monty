#include "monty.h"

/**
 * pchar_function - prints the char at the top of the stack (ascii).
 * @stack_head: the top.
 * @line_number: number of lines.
 * Return: nothing.
 */
void pchar_function(stack_t **stack_head, unsigned int line_number)
{
if (!*stack_head)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
free_function(allData.stack_head);
exit(EXIT_FAILURE);
}

if ((*stack_head)->n > 127 || (*stack_head)->n < 0)
{
fprintf(stderr, "L%d: can't pchar, number out of range\n", line_number);
free_function(allData.stack_head);
exit(EXIT_FAILURE);
}

printf("%c\n", (*stack_head)->n);
}
