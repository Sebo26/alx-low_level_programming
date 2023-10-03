#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - The function creates an array of chars, and
 * initializes it with a specific char.
 * @size: The size of memory available for characters to be entered
 * @c: The character that will initialize the array.
 * Return: NULL (if size = 0) or *array (pointer to the array)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
array = malloc(sizeof(char) * size);

if (size == 0 || array == NULL)
{
	return (NULL);
}

for (i = 0; i < size; i++)
{
	array[i] = c;
}
	return (array);
}
