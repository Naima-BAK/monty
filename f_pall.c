#include "monty.h"
/**
 * f_pall - print all the values on the stack, starting from the top
 * @stack: pointer to pointer to the top of strack
 * @line_num: number on the line being executed
 */
void f_pall(stack_t **stack, unsigned int line_num)
{
stack_t *current = *stack;
(void)line_num;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
