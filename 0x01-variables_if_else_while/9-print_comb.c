#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Code prints all possible combinations of single-digit numbers.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
int n;
int m;

for (n = 0; n < 10; n++)
{
	putchar('0' + n);
while (m <= n)
{
	putchar(',');
	putchar(' ');
	m++;
}
}

return (0);
}
