#include "main.h"

/**
 * _sqrt_recursion - The function returns the natural square root of a number.
 * @n: The number that will be squared.
 * Return: -1 (if n doesn't have a natural square root)
 */
int _sqrt_recursion(int n)
{
	if (_sqrt_recursion(n) < 0)
	{
	return (-1);
	}
	return (n * _sqrt_recursion(n));
}
