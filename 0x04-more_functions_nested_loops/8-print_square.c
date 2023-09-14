#include "main.h"

/**
 * print_square - The function prints a followed by a new line.
 *
 * @size: it is the size of the square
 * Return: size
 */
void print_square(int size)
{
int m;
int n;
if (size > 0)
{
	while (m == size)
	{
		while (n == size)
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
