#include "monty.h"
/**
 * main - entry point to program
 * @argc: number of arguments
 * @argv: pointer to array of args
 * Return: failure or success
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
return (EXIT_FAILURE);
}
read_monty_f(argv[1]);
return (EXIT_SUCCESS);
}
