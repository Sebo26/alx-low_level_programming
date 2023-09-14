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
while (m <= 10)
{
	for (n = 0; n <= 14; n++)
	{
		_putchar ('0' + n);
	}
_putchar ('\n');
m++;
}
}
