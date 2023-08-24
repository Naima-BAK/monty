#include "monty.h"


/**
 * mode_function - mode queue/stack.
 * @stack_head: the top of the stack.
 * @line_number: number of lines.
 * Return: nothing.
 */
void mode_function(stack_t **stack_head, unsigned int line_number)
{
(void)stack_head;

(void)line_number;

if (strcmp(allData.opcode, "queue") == 0)
{
allData.stack_mode = 1;
}
else if (strcmp(allData.opcode, "stack") == 0)
{
allData.stack_mode = 0;
}
}
