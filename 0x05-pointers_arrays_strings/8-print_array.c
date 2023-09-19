#include "main.h"
#include <stdio.h>

/**
 * print_array - The function prints n elements of an array.
 * @a: value of each array
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; n++)
{
	printf("s[%u] = ", n);
	while (n != '\0')
	{
		printf("%d", a[i]);
	}
}
}
