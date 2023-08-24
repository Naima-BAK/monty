#include "monty.h"
/**
 * allOperations - execute the corresponding function.
 * @opcode_search: the opcode.
 * Return: pointer to the  opcode, or NULL
 */
void (*allOperations(char *opcode_search))(stack_t **stack,
		unsigned int line_number)
{
instruction_t instraction[] = {
{"push", push_function},
{"pall", pall_function},
{"pint", pint_function},
{"pop", pop_function},
{"swap", swap_function},
{"add", add_function},
{"nop", nop_function},
{NULL, NULL}
};
int index;

for (index = 0; instraction[index].opcode; index++)
{
if (strcmp(instraction[index].opcode, opcode_search) == 0)
{
break;
}
}

return (instraction[index].f);
}
