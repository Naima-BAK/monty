#include "monty.h"


/**
 * rotr_function - rotates the stack to the bottom.
 * @stack_head: the top.
 * @line_number: number of lines.
 * Return: nothing.
 */
void rotr_function(stack_t **stack_head, unsigned int line_number)
{
stack_t *last_node = *stack_head;
int i;

if (!*stack_head || (*stack_head)->next == NULL)
{
return;
}

(void)line_number;

for (i = 0; last_node; i++)
{
if (!last_node->next)
break;

last_node = last_node->next;
}

last_node->next = *stack_head;
last_node->prev->next = NULL;

(*stack_head)->prev = last_node;
(*stack_head) = last_node;

last_node->prev = NULL;

}
