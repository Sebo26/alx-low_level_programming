#include "main.h"

/**
 * is_prime_number - The function checks if a number is a prime number or not.
 * @n: The number that will be checked.
 * Return: 1 (if number is a prime number), 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
