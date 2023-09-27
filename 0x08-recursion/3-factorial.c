#include "main.h"

/**
 * factorial - The function returns the factorial of a given number.
 * @n: The number that will have its factorial returned.
 * Return: -1 (when n is below 0) and 1 (when n = 0)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
