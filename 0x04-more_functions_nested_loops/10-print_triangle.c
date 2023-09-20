#include "main.h"

/**
 * print_triangle - Prints a triangle made of # followed by a new line.
 *
 * @size: it is the size of the triangle.
 */
void print_triangle(int size)
{
int m;
int n;
if (size > 0)
{
	for (m = 1; m <= size; m++)
	{
		for (n = size; n >=1; n++)
		{
			_putchar ('#');
		}
	_putchar ('\n');
	}
}
else
{
	_putchar ('\n');
}
}
