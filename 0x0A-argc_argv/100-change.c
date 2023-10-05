#include <stdio.h>
#include <stdlib.h>
/**
 * main - ENntry point
 * Description: The program prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: The number of arguments in the program.
 * @argv: The arguments stored in the program.
 * Return: 0(Success)
 */
int main(int argc, char **argv)
{
if (argc < 1)
{
	printf("Error\n");
	return (1);
}

if (atoi(*argv) < 0)
{
	printf("0\n");
}
return (0);
}
