#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - The program does different mathematical operations
 * between two numbers.
 * @argc: The number of arguments in the program
 * @argv: The arguments in the program
 * Return: The result of the calculation.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int a;
int b;
char *op;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
a = atoi(argv[1]);
op = argv[2];
b = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
	printf("Error\n");
	exit(99);
}
if ((*op == '/' && b == 0)
	|| (*op == '%' && b == 0))
	{
	printf("Error\n");
	exit(100);
	}
printf("%d\n", get_op_func(op)(a, b));
return (0);
}
