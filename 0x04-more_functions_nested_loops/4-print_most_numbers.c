#include "main.h"

/**
 * print_most_numbers - Prints the numbers 0 to 9 followed by a new line,
 * but 2 and 4 will not be printed.
 * Return: Always 0
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
	if (n != 2 && n != 4)
	{
		_putchar ('0' + n);
	}
}
_putchar (n);
}
