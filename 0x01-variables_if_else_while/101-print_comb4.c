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
for (n = 0; n < 9; n++)
{
for (m = n + 1; m <= 9; m++)
{
for (l = m + 1; l<=9; l++)
{
	putchar('0' + n);
	putchar('0' + m);
	putchar('0' + l);
if (n != 7 || m != 8 || l != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
