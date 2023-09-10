#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Checks if the last digit of a randomly generated number is
 * greater than 5, equal to zero or less than 6 but not equal to zero.
 *
 * Return: Always 0 (Success)
 * */

int main(void)
{
int n;
int m;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;

m = n % 10;
l = m;
if (m > 5)
{
	printf("Last digit of %d is %d %s\n", n, l, "and is greater than 5");
}
else if (m == 0)
{
	printf("Last digit of %d is %d %s\n", n, l, "and is 0");
}
else
{
	printf("Last digit of %d is %d %s\n", n, l, "and is less than 6 and not 0");
} /* your code goes there */

return (0);
}
