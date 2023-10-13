#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - The function searches for an integer.
 * @array: The elements that will be searched for integer.
 * @size: Number of elements in the array.
 * @cmp: pointer to the array function.
 * Return: array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
{
	return (-1);
}

for (i = 0; i < size; i++)
{
	if (cmp(array[i] != 0))
	{
		return (i);
	}
}
return (i);
}
