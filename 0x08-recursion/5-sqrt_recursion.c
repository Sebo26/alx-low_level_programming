#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - The function returns the natural square root of a number.
 * @n: The number that will be squared.
 * Return: -1 (if n doesn't have a natural square root)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (_sqrt_recursion(-1));
}

/**
 * help_sqrt_recursion - The function squares numbers 1 and upwards until = n.
 * @i: number that will be squared to get n (iterator)
 * @n: the number that will have its square root determined.
 * Return: Square root.
 */
int help_sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (i);
	}
	return (help_sqrt_recursion(n, i + 1));
}
