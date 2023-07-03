#include "main.h"
#include <unistd.h>
/**
 * _puts - prints to standard output with a new line
 *
 *@str: prints strings on std output
 *
 * Return: Accepts 0
 *
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		write(1, str, 1);

	}
	write(1, "\n", 1);

}
