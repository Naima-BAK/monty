#include "monty.h"


/**
 * rotl_function -  rotates the stack to the top.
 * @stack_head: the top.
 * @line_number: number of lines.
 * Return: nothing.
 */
void rotl_function(stack_t **stack_head, unsigned int line_number)
{
stack_t *last_node = *stack_head;
int i;

if (!*stack_head)
return;

(void)line_number;

for (i = 0; last_node; i++)
{
if (!last_node->next)
break;

last_node = last_node->next;
}

last_node->next = *stack_head;
(*stack_head)->prev = last_node;
(*stack_head) = (*stack_head)->next;

(*stack_head)->prev->next = NULL;
(*stack_head)->prev = NULL;
}
