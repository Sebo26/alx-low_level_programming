#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - It prints all natural numbers from n to 98
 *
 * @n: The number from which the function will start counting.
 */
void print_to_98(int n)
{
int i;
printf("Start from %d", n);
for (i = n; i <= 98; i++)
{
	_putchar ('0' + i);
	if (i != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
}
