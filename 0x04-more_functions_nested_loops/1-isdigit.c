#include "main.h"

/**
 * _isdigit - checks for digits
 *
 * @c: prints digits
 *
 * Return: Accepts 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}

	return (0);
}
