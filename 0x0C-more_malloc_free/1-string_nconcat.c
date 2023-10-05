#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - The string concatenates two strings.
 * @s1: The first string.
 * @s2: The string that will be joined to the first string.
 * @n: The number of characters of s2 that will be joined to s1.
 * Return: str (pointer to new string) or NULL(if str == NULL)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
int length;
int j;
length = strlen(strncpy(s1, s2, n));
str = malloc((length + 1) * sizeof(char));

if (str == NULL)
{
	return (NULL);
}

for (j = 0; s1[j] != '\0'; j++)
{
	str[j] = s1[j];
}

for (n = 0; s2[n] != '\0'; n++)
{
	str[j + n] = s2[n];
}
str[length] = '\0';
return (str);
}
