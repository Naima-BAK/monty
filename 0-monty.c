#include "monty.h"
/**
 * pall_function - prints all the values on the stack.
 * @stack_head: double pointer to the strack head.
 * @index: an integer counter
 */
void pall_function(stack_t **stack_head, unsigned int index)
{
stack_t *my_node = *stack_head;
(void)index;
while (my_node != NULL)
{
printf("%d\n", my_node->n);
my_node = my_node->next;
}
}


/**
 * push_function - function that push element into stack.
 * @stack_head: double pointer to the tack head.
 * @index: An integer counter.
 */
void push_function(stack_t **stack_head, unsigned int index)
{
stack_t *node = malloc(sizeof(stack_t));
int val;
char *vallData;
UNUSED(index);
if (node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
vallData = strtok(NULL, " \t\n");
if (vallData == NULL)
{
fprintf(stderr, "Error: Nothing to push\n");
exit(EXIT_FAILURE);
}
val = atoi(vallData);
if (val == 0 && strcmp(vallData, "0") != 0)
{
fprintf(stderr, "Error: Nothing to push\n");
exit(EXIT_FAILURE);
}
node->n = val;
node->prev = NULL;
node->next = *stack_head;
if (*stack_head != NULL)
(*stack_head)->prev = node;
*stack_head = node;
}

/**
 * getline - function that gets line.
 * @linePointer: double pointer to the line.
 * @n: number of of lines
 * @fileS: pointer.
 * Return: return 1 or -1.
 */
ssize_t getline(char **linePointer, size_t *n, FILE *fileS)
{
int my_character;
size_t bufferSize = 0;
char *temptr = realloc(*linePointer, *n);

if (linePointer == NULL || n == NULL || fileS == NULL)
return (-1);
if (*linePointer == NULL || *n == 0)
{
*n = 128;
*linePointer = malloc(*n);
if (*linePointer == NULL)
return (-1);
}
while ((my_character = fgetc(fileS)) != '\n' && my_character != EOF)
{
if (bufferSize + 1 >= *n)
{
*n *= 2;
if (temptr == NULL)
{
free(*linePointer);
return (-1);
}
*linePointer = temptr;
}
(*linePointer)[bufferSize++] = (char)my_character;
}
if (bufferSize == 0 && my_character == EOF)
return (-1);
(*linePointer)[bufferSize] = '\0';

return (bufferSize);
}

/**
 * monty_bytes - function that read Monty bytes.
 * @theFile: the file name
 */
void monty_bytes(const char *theFile)
{
FILE *my_file;
char *ligne = NULL;
size_t len = 0;
ssize_t r;
unsigned int numberOfLines = 1;
stack_t *stack = NULL;
my_file = fopen(theFile, "r");
if (my_file == NULL)
{
fprintf(stderr, "Error: Unable to open the specified file %s\n", theFile);
exit(EXIT_FAILURE);
}
while ((r = getline(&ligne, &len, my_file)) != -1)
{
process_l(&stack, ligne, numberOfLines);
numberOfLines++;
}
free(ligne);
fclose(my_file);
}
