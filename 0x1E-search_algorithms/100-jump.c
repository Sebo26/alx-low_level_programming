#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array.
 * @value: the value searched for.
 * Return: -1 (if value is not present or if it is NULL) or index of value
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;
	int curr = step;
	int i;

	if (array == NULL)
		return (-1);

	while (curr < (int)size && array[curr] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = curr;
		curr += step;
	}
	printf("Value checked array[%d] = [%d]\n", step, array[step]);
	printf("Value found between indexes [%d] and [%d]\n", prev, curr);

	for (i = prev; i < (int)size && i <= curr; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

