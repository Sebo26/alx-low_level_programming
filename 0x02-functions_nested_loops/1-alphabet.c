#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Description: This function prints the alphabet in lowercase followed by
 * a new line.
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
	putchar('\n');
}
}
/**
 * main - Entry point
 *
 * Description: Calls print_alphabet to print the alphabet followed by
 * a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
