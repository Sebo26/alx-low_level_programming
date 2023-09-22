#include "main.h"
#include <string.h>

/**
 * reverse_array - The function reverses the content of an array of integers.
 * @a: Number stored in the array.
 * @n: number of elements of the array.
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; i >= 0; i--)
{
	_putchar(a[i]);
	if (i > 0)
	{
	_putchar(',');
	_putchar(' ');
	}
}
}
