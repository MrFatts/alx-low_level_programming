#include "main.h"

/**
 * _sqrt_recursion - calc square of num
 *
 * @n: parameter
 *
 * Return: Accept 0
 *
 */

int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 0));
}

int get_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (get_sqrt(n, i + 1));

}
