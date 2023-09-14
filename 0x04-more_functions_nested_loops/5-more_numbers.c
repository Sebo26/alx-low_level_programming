#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14, 10 times followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int m;
int n;
for (m = 0; m <= 14; m++)
{
	for (n = 0; n < 10; n++)
	{
		_putchar ('0' + m);
		_putchar ('\n');
	}
}
}
