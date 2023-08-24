#include "monty.h"


/**
 * pstr_function - prints the string starting at the top of the stack.
 * @stack_head: the top.
 * @line_number: number of lines.
 * Return: nothing.
 */
void pstr_function(stack_t **stack_head, unsigned int line_number)
{
stack_t *my_node = *stack_head;
int i;

(void)line_number;

for (i = 0; my_node && my_node->n != 0 &&
!(my_node->n > 127 || my_node->n < 0); i++)
{
fprintf(stdout, "%c", my_node->n);
my_node = my_node->next;
}

fprintf(stdout, "\n");
}
