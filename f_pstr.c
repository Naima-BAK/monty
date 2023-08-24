#include "monty.h"
/**
 * f_pstr - the pstr opcode
 * @stack: Double pointer to the stack
 * @line_num: counter
 */
void f_pstr(stack_t **stack, unsigned int line_num)
{
stack_t *temp = *stack;
(void)line_num;
while (temp != NULL && temp->n != 0 &&
(temp->n >= 32 && temp->n <= 126))
{
printf("%c", temp->n);
temp = temp->next;
}
printf("\n");
}
