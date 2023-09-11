#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Code prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;

for (n = 0; n < 9; n++)
{
for (m = n + 1; m <= 9; m++)
{
	putchar('0' + n);
	putchar('0' + m);
}
if (m < 9)
{
	putchar(',');
	putchar(' ');
}
}

return (0);
}
