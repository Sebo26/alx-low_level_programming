#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - The function returns a pointer to a 2D array of integers.
 * @width: Number of colomns
 * @height: Number of rows
 * Return: NULL (failure or when width or height is 0) or
 * array (pointer to a 2D array of integers)
 */
int **alloc_grid(int width, int height)
{
int k;
int i;
int **array;

if (width <= 0 || height <= 0)
{
	return (NULL);
}

array = (int **)malloc(sizeof(int *) * height);

if (array == NULL)
{
	return (NULL);
}

for (k = 0; k < height; k++)
{
	array[k] = (int *)malloc(sizeof(int) * width);
	if (array[k] == NULL)
	{
		for (i = 0; i < k; i++)
		{
			free(array[i]);
		}
		free(array);
		return (NULL);
	}

for (i = 0; i < width; i++)
{
	array[k][i] = 0;
}
}
return (array);
}
