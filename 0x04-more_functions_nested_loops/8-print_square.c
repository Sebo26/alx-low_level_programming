#include "main.h"

/**
 * print_square - The function prints a '#' followed by a new line.
 *
 * @size: it is the size of the square
 * Return: size
 */
void print_square(int size)
{
int m = 1;
int n = 1;
if (size > 0)
{
	while (m <= size)
	{
		for (n = 1; n <= size; n++)
		{
			_putchar ('#');
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
