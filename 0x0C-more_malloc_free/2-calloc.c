#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * *_calloc - The function allocates memory for an array, using malloc.
 * @nmemb: Number of elements in array.
 * @size: The number of bytes that will be occupied by each element.
 * Return: NULL(if nmemb or size is 0 or array == NULL) or
 * array (pointer to the allocated memory)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}

array = malloc(nmemb * size);

if (array == NULL)
{
	return (NULL);
}

memset(array, 0, nmemb * size);
return (array);
}
