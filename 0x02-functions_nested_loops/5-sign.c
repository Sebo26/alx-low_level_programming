#include "main.h"

/**
 * print_sign - Prints whether a number is negative, positive
 * or zero.
 *
 * Return: 1 (positive), 0 (zero) or -1(negative)
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar ('+');
	return(1);
}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
		else
		{
			return (-1);
		}
}
