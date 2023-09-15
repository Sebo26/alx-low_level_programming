#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14, 10 times followed by a new line.
 *
 * Return: m(Success)
 */
void more_numbers(void)
{
int n = 0;
do 
{
	int m = 0;
	while (m <= 14)
	{
		_putchar ('0' + m);
		m++;
	}
	_putchar ('\n');
	n++;
} while (n < 10);
}
