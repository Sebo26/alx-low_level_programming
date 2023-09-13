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
int k;
int l;
for (i = 0; i <= 2; i++)
{
	for (j = 0; j <= 9; j++)
	{
		_putchar (j);
		_putchar (' ');
		_putchar (':');
		_putchar (' ');
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar (i);
					_putchar (k);
					_putchar (l);
					_putchar ('\n');
				}
			}
		}
	}
}
}
