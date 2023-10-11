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
if (array == NULL || cmp == NULL)
{
	return (0);
}


if (size <= 0 || array == 0)
{
	return (-1);
}
else
{
	while (size-- > 0)
	{
		cmp(*array);
		array++;
	}
}
return (*array);
}
