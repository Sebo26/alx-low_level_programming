#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array.
 * @value: the integer searched for.
 * Return: -1 (if value is not present or if it is NULL) or index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle;
	int m;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		middle = left + (right - left) / 2;

		if (array[middle] == value)
		{
			return (middle);
		}

		printf("Searching in array: ");
		for (m = left; m <= right; ++m)
		{
			printf(" %d", array[m]);
			if (m < right)
				printf(",");
		}
		printf("\n");

		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
