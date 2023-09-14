#include "main.h"

/**
 * times_table - Prins the nine times tables and starts at zero.
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int a;
int b;
int m;
for (a = 0; a <= 81; a++)
{
	for (b = 0; b <= 81; b++)
	{
		m = a * b;
		_putchar (m);
		_putchar (',');
		_putchar (' ');
	}
	_putchar ('\n');
}
}
