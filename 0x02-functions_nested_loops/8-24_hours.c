#include "main.h"

/**
 * jack_bauer - The function prints every minute of the day,
 * starting from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24; i++)
{
	for (j = 0; j < 60; j++)
	{
		_putchar ('0' + (i / 10));
		_putchar ('0' + (i % 10));
		_putchar (':');
		_putchar ('0' + (j / 10));
		_putchar ('0' + (j % 10));
		_putchar ('\n');
	}
}
}
