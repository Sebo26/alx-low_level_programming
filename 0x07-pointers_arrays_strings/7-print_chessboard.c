#include "main.h"

/**
 * print_chessboard - The function prints a chessboard.
 * @a: The rows
 * @[8]: The 8 colomns that will be printed
 * Return: 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int m;
int n;
for (m = 0; m < 8; m++)
{
	for (n = 0; n < 8; n++)
	{
		_putchar(a[m][n]);
	}
	_putchar('\n');
}
}
