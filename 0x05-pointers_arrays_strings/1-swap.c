#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first parameter
 *
 * @b: second parameter
 *
 * Return: Accept 0
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;

}
