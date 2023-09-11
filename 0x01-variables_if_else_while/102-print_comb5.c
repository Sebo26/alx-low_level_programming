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
int l;
int k;
for (n = 0; n < 9; n++)
{
for (m = 0; m <= 9; m++)
{
for (l = 0; l <= 9; l++)
{
for (k = m + 1; k <= 9; k++)
{
	putchar('0' + n);
	putchar('0' + m);
	putchar(' ');
	putchar('0' + l);
	putchar('0' + k);
if (n != 9 || k != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
}
}
putchar('\n');

return (0);
}
