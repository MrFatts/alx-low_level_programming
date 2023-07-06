#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: parameter of pointer
 *
 * Return: Accept 0
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;

	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}