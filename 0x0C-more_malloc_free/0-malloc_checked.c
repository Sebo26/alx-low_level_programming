#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - The function allocates memory using malloc.
 * @b: The memory that will be allocted
 * Return: memory (pointer to the allocated memory) 98(malloc fails, b == NULL)
 */
void *malloc_checked(unsigned int b)
{
int *memory;

memory = malloc(sizeof(b));
if (memory == NULL)
{
	exit(98);
}

return (memory);
}
