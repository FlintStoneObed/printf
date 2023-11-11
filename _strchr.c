#include "main.h"

/**
 * _strchr - locate character in string
 * @s: string
 * @c: character to search
 *
 * Return: A pointer to the matched character or NULL if the character
 * is not found.
 */
char *_strchr(const char *s, int c)
{
	char *tmp_str = (char *) s;

	if (tmp_str == NULL)
		return (NULL);

	while (*tmp_str != '\0')
	{
		if (*tmp_str == c)
			return (tmp_str);
		tmp_str++;
	}

	if (c == '\0')
		return (tmp_str);

	return (NULL);
}
