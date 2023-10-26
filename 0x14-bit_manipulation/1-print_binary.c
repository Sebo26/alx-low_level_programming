#include "main.h"
#include <stdlib.h>

/**
 * print_binary - The function prints the binary representation of a number.
 * @n: The number to be represented in binary.
 */
void print_binary(unsigned long int n)
{
int bit;
int i;
int m = 0;

if (n == 0)
{
	_putchar ('0');
}

for (i = 63; i >= 0; i--)
{
	bit = (n >> i) & 1;
	if (bit == 1)
	{
		m = 1;
	}
	if (m)
	{
		_putchar('0' + bit);
	}
}
}
