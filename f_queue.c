#include "monty.h"
/**
 * f_queue - the queue opcode
 * @stack: Double pointer to the stack
 * @line_num: counter
 */
void f_queue(stack_t **stack, unsigned int line_num)
{
stack_t *c = *stack;
(void)line_num;
if (*stack == NULL || (*stack)->next == NULL)
return;
while (c->next != NULL)
c = c->next;
c->next = *stack;
(*stack)->prev = c;
*stack = (*stack)->next;
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
}
