#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: The code prints the single digits of base 10 from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
	putchar(n);
}
putchar('\n');

return (0);
}
