#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>

extern char *vallData;

#define UNUSED(i) (void)(i)
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;




/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void pall_function(stack_t **stack_head, unsigned int index);
void push_function(stack_t **stack_head, unsigned int index);
ssize_t getline(char **linePointer, size_t *n, FILE *fileS);
void monty_bytes(const char *theFile);
void process_function(stack_t **stack, char *ligne, unsigned int counter);
void (*allOperations(char *opcode_search))(stack_t **stack, unsigned int line_num);
void pint_function(stack_t **stack, unsigned int line_num);


#endif
