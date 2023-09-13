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
if (n >= 0)
{
m = (n % 10) * 11;
_putchar('0' + m);
}
else
{
m = (n % 10) * -1 * 11;
}

return (m);
}
