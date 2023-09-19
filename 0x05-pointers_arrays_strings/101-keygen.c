#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * password - The function generatea a random password
 *
 * Description: To generate a password
 */
int password(void)
{
srand(time(0));
int p = (rand () / 100);
printf("%d", p);
}

/**
 * main - Entry point
 *
 * Description: The program generates valid password.
 * return: 0 (Success)
 */
int main(void)
{
password();

return (0);
}
