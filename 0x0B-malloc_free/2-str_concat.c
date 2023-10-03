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
int i;

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

for (i = 0; s1[i] != '\0'; i++)
{
	string[i] = s1[i];
}

for (n = 0; s2[n] != '\0'; n++)
{
	string[i + n] = s2[n];
}
string[length] = '\0';
return (string);
}
