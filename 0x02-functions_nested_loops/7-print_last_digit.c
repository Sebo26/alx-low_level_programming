#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number to find last digit of.
 * Return: 0
 */
int print_last_digit(int n)
{
int m;
m = n % 10;
_putchar('0' + m);

return (m);
}
