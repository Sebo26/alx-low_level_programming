#include "main.h"

/**
 * _pow_recursion - The function returns the value of x raised
 * to the power of y
 * @x: The base of the exponent
 * @y: The power to which x will be raised
 * Return: -1 (when y is lower than 0) or value of x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
