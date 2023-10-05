#include <stddef.h>
#include <stdlib.h>

/**
 * *_realloc - The function reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated with a call to malloc.
 * @old_size: space for ptr in bytes.
 * @new_size: size of new memory block in bytes.
 * Return: ptr(if new_size == old_size)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

if (new_size > old_size)
{
	ptr = "";
}

ptr = malloc(new_size);
if (ptr == NULL)
{
	ptr = malloc(new_size);
}

if (new_size == 0)
{
	free(ptr);
	return (NULL);
}

if (new_size == old_size)
{
	return (ptr);
}

free(ptr);
return (ptr);
}
