#include "monty.h"
/**
 * main - main function
 * @argc: number of arguments.
 * @argv: pointer to array of arguumenst.
 * Return: failure, or success
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
return (EXIT_FAILURE);
}
monty_bytes(argv[1]);
return (EXIT_SUCCESS);
}
