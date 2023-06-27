#include "main.h"

/**
 * _strlen - prints the len of string
 *
 * @s: parameter
 *
 * Return: Accept 0
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;

	}
	return (n);
}
