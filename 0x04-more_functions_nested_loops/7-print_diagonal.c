#include "main.h"

/**
 * print_diagonal - The function draws a diagonal line.
 * @n: number of times the character '\' will be printed.
 */
void print_diagonal(int n)
{
int l;
int m;
if (n > 0)
{
	for (l = 1; l <= n; ++l)
	{
	for (m = 1; m <= l; m++)
	{
		_putchar ('\\');
		_putchar ('$');
		_putchar ('\n');
	}
	_putchar ('\n');
	}
}
else
{
	_putchar ('$');
	_putchar ('\n');
}
}
