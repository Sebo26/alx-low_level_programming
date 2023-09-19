#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: The program generates valid password.
 * return: p (password)
 */
int main(void)
{
srand(time(0));
int p = (rand () / 100);
return (p);
}
