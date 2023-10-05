#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - The function allocates memory using malloc.
 * @b: The memory that will be allocted
 * Return: memory (pointer to the allocated memory)
 * exit 98(malloc fails, memory == NULL)
 */
void *malloc_checked(unsigned int b)
{
void *memory;

memory = malloc(b);
if (memory == NULL)
{
	exit(98);
}

return (memory);
}
