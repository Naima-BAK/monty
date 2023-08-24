#include "monty.h"
/**
 * f_rotl - the rotl opcode
 * @stack: Double pointer to the stack
 * @line_num: Line number being executed
 */
void f_rotl(stack_t **stack, unsigned int line_num)
{
stack_t *l = *stack;
int temp;
(void)line_num;
if (*stack != NULL && (*stack)->next != NULL)
{
while (l->next != NULL)
l = l->next;
temp = l->n;
while (l->prev != NULL)
{
l->n = l->prev->n;
l = l->prev;
}
(*stack)->n = temp;
}
}
