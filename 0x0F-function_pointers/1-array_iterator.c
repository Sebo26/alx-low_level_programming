#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - The function executes a function given as a parameter on
 * each element of an array.
 * @array: Elements given as parameter.
 * @size: The size of the array.
 * @action: Pointer to the array function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
{
}
else
{
while (size-- > 0)
{
	action(*array);
	array++;
}
}
}
