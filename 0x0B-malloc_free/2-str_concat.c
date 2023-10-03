#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - The function concatenates two strings.
 * @s1: The first string.
 * @s2: The string that will be joined to s1.
 * Return: string (newly allocated space in memory containing s1, s2 '\0')
 * or NULL (failure or empty string)
 */
char *str_concat(char *s1, char *s2)
{
char *string;
int length;
int n;

if (s1 == NULL || s2 == NULL)
{
	return (NULL);
}

length = strlen(s1) + strlen(s2);
string = malloc((length + 1) * sizeof(char));

if (string == NULL)
{
	return (NULL);
}
for (n = 0; n < length; n++)
{
	string[n] = s1[n] + s2[n];
}
string[length] = '\0';
return (string);
}
