#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description - The program adds positive numbers.
 * @argc: The number of arguments in the program.
 * @argv: The arguments in the program.
 * Return: 1 (Error, symbol that is not a digit is entered)
 */
int main(int argc, char **argv)
{
int i;
int sum = 0;

if (argc == 1)
{
	printf("0\n");
}
if (isdigit(atoi(argv[i])) == 0)
{
	for (i = 0; i <= argc; i++)
	{
		sum = sum + atoi(argv[i]);
		printf("%d\n", sum);
	}
	else if (isdigit(atoi(argv[i])) != 0)
	{
		printf("Error\n");
		return (1);
	}
}
return (0);
}
