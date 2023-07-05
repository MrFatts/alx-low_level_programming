#include "main.h"

/**
 * _strchr - finds char in string
 *
 * @s: string parameter
 * @c: character parameter
 *
 * Return: Accept 0
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
	}
	return (NULL);
}
