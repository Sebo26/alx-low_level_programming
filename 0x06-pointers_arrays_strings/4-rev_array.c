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
int c;
for (i = a; i >= 0; i--)
{
	_putchar(*a);
	for (c = 1; c < n - 1; c++)
	{
	_putchar(',');
	_putchar(' ');
	}
}
}
