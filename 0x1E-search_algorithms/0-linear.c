#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array.
 * @value: the integer searched for.
 * Return: -1 (if value is not present or if it is NULL) or index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
