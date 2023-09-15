#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14, 10 times followed by a new line.
 *
 * Return: m(Success)
 */
void more_numbers(void)
{
int m;
int n;
for (m = 0; m < 10; m++)
{
	for (n = 0; n < 15; n++)
	{
		_putchar ('0' + n);
	}
_putchar ('\n');
}
}
