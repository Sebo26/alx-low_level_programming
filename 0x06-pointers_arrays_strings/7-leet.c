#include "main.h"

/**
 * *leet - The function prints certain numbers when letters are entered.
 * @n: characters that will be entered.
 * Return: n (the string)
 */
char *leet(char *n)
{
if (n == 'a' || n == 'A')
{
	_putchar('4');
}
else if (n == 'e' || n == 'E')
{
	_putchar('3');
}
else if (n == 'o' || n == 'O')
{
	_putchar('0');
}
else if (n == 't' || n == 'T')
{
	_putchar('7');
}
else if (n == 'l' || n == 'L')
{
	_putchar('1');
}
return (n);
}
