#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: string to duplicate
 *
 * Return: A pointer to the duplicated string, NULL if it fails/
 */

char *_strdup(const char *str)
{
	char *dup_str;
	int i = 0;

	if (str == NULL)
		return (NULL);

	dup_str = malloc(strlen(str) + 1);

	if (dup_str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';

	return (dup_str);
}
