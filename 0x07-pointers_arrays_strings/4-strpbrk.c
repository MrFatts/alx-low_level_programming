#include "main.h"

/**
 *_strpbrk - search string for a type of byte
 *
 * @s: string parameter
 * @accept: compared parameter
 *
 * Return: Accept 0
 *
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}

	}
	return (NULL);

}
