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
char m;

for (n = 0; n < 10; n++)
{
	putchar('0' + n);
for (m = 0; m < 9; m++)
{
	putchar(',');
	putchar(' ');
}
}

return (0);
}
