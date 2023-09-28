#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - The function returns the natural square root of a number.
 * @n: The number that will be squared.
 * Return: -1 (if n doesn't have a natural square root)
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return _sqrt_recursion(n, i + 1);
}
