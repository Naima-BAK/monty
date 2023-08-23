#include "monty.h"

/**
 * process_function- function responsible for processing a line of code.
 * @stack: double pointer to the head of teh stack.
 * @ligne: line of monty code
 * @counter: an integer counter.
 */
void process_function(stack_t **stack, char *ligne, unsigned int counter)
{
char *code_pr;
void (*function)(stack_t **stack, unsigned int counter);

while (*ligne == ' ' || *ligne == '\t')
ligne++;

if (*ligne == '#')
{
return;
}

code_pr = strtok(ligne, " \t\n");
if (code_pr == NULL)
{
return;
}

function = allOperations(code_pr);
if (function == NULL)
{
fprintf(stderr, "L%u: The instruction is unknown %s\n", counter, code_pr);
exit(EXIT_FAILURE);
}
function(stack, counter);
}
