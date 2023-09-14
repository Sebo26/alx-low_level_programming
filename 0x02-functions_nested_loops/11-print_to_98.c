#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - It prints all natural numbers from n to 98
 *
 * @n: The number from which the function will start counting.
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
	printf("%d", i);
	if (i != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
}

int main(void)
{
int n;
scanf("%d", &n);
print_to_98(n);

return (0);
}
