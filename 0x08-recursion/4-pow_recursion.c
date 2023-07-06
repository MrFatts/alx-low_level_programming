#include "main.h"

/**
 * _pow_recursion - raises to power the value of num
 *
 * @x: parameter
 * @y: parameter
 *
 * Return: Aceepts 0
 *
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);

}
