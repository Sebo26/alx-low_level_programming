#include <stddef.h>
#include <stdlib.h>

/**
 * *array_range - The function creates an array of integers.
 * @min: Minimum value in array.
 * @max: Maximum vaalue in array.
 * Return: NULL(if min > max or arr is NULL) or
 * arr(pointer to the newly created array)
 */
int *array_range(int min, int max)
{
int i;
int *arr;
int size;

if (min > max)
{
	return (NULL);
}
size = max - min + 1;
arr = malloc(size * sizeof(int));
if (arr == NULL)
{
	return (NULL);
}

for (i = min; i <= max; i++)
{
	arr[i] = min + i;
}
return (arr);
}
