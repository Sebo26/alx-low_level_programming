#include "main.h"

/**
 * print_line - The function that draws a straight line in the terminal.
 *@n: the number of times the character '_' will be printed
 */
void print_line(int n)
{
if (n > 0)
{
	for (n = 1; n > 0; n++)
	{
		_putchar ('_');
		_putchar ('\\');
		_putchar ('n');
	}
}
else
{
	_putchar ('\\');
	_putchar ('n');
}
}
