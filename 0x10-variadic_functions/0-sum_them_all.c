#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - the function returns the sum of all its parameters.
 * @n: The numbers that will be added.
 * Return: The sum. or 0(if n == 0)
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
	return (0);
}

