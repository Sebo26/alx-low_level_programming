#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * **strtow - The function splits a string into words.
 * @str: The string that will be split into words.
 * Return: words (pointer to an array of strings) or
 * NULL (str == NULL or str == "")
 */
char **strtow(char *str)
{
char *words;
int length;
int i;

if (str == NULL || str[0] == '\0')
{
	return (NULL);
}

if (words == NULL)
{
	return (NULL);
}

length = strlen(str);
words = malloc((length + 1) * sizeof(char));

if (isspace(str))
{
	for (i = 0; i < length; i++)
	{
	words = str[i];
	_putchar('\n');
	}
}
words[length] = NULL;
return (words);
}
