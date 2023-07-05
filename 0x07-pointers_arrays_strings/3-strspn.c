#include "main.h"

/**
 * _strspn - gets length of string prefix
 *
 * @s: string parameter
 * @accept: accepted found value
 *
 * Return: Accept 0
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;


	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if ((count > 0) && s[i] != accept[j])
		{
			break;
		}

	}
	return (count);

}
