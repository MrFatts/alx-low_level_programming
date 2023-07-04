#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: pointer to memory to print
 * @n: parameter
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
