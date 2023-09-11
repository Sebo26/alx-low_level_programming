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
	putchar('0' + n);
for (m = 1; m <= 9; m++)
{
	putchar('0' + m);
	putchar(',');
	putchar(' ');
}
}

return (0);
}
