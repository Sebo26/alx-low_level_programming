#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - The function concatenates all the arguments of my program.
 * @ac: The number of arguments in the program.
 * @av: The arguments in the program.
 * Return: NULL (if ac is 0 or av is NULL) or string(pointer to a new string)
 */
char *argstostr(int ac, char **av)
{
int i;
int length;
char *string;

if (ac == 0 || av == NULL)
{
	return (NULL);
}


for (i = 0; i != '\0'; i++)
{
	length += strlen(av[i]) + 1;
}
string = (char *) malloc((length + 1) * sizeof(char));

if (string == NULL)
{
	return (NULL);
}
string[length] = '\0';
return (string);
}
