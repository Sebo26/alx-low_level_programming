#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - The function prints the sum of the two diagonals of a square matrix of integers
 * @a: diagonal rows
 * @size: diagonal colomn
 * Return: 0 (success)
 */
void print_diagsums(int *a, int size)
{
int sum_left = 0;
int sum_right = 0;
int n;
for (n = 0; n < size; n++)
{
	sum_left += a[n * size + n];
	sum_right += a[n * size + (size - 1 - n)];
}
printf ("%d", sum_right);
}
