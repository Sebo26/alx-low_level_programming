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

