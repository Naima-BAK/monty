#include "monty.h"
/**
 * f_rotr - the rotr opcode
 * @stack: Double pointer to the stack
 * @line_num: counter
 */
void f_rotr(stack_t **stack, unsigned int line_num)
{
stack_t *f = *stack;
int temp;
(void)line_num;
if (*stack != NULL && (*stack)->next != NULL)
{
while (f->prev != NULL)
f = f->prev;
temp = f->n;
while (f->next != NULL)
{
f->n = f->next->n;
f = f->next;
}
(*stack)->n = temp;
}
}
