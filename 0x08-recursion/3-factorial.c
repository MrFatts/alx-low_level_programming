#include "main.h"

/**
 * factorial - calc the factorial of a num
 *
 * @n: number parameter
 *
 * Return: Aceepts 0
 *
 */


int factorial(int n)
{
	int num;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	num = factorial(n - 1);
	return (n * num);

}
