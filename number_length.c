#include "monty.h"



/**
 * _size -  number of characters.
 * @number: number.
 * Return: the lentgh.
 */
size_t _size(int number)
{
int size = 0;

if (!number)
return (1);

if (number <= 0)
size++;

while (number != 0)
{
number /= 10;
size++;
}

return (size);
}
