#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description - The program adds positive numbers.
 * @argc: The number of arguments in the program.
 * @argv: The arguments in the program.
 * Return: 0 (No numbers entered), 1 (Error, symbol that is not a
 * digit is entered)
 */
int main(int argc, char **argv)
{
int i;
sum = 0;
for (i = 0; i <= argc; i++)
{
	sum = sum + argv[i];
	printf("%d\n", sum);
}
