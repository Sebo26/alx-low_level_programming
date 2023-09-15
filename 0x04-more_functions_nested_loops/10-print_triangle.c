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
	while (m == size)
	{
		while (n > 1 && n == size)
		{
			_putchar ('#');
			n++;
		}
	_putchar ('\n');
	m++;
	}
}
else
{
	_putchar ('\n');
}
}
