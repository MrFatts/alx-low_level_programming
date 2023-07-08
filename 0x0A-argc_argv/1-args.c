#include "main.h"

/**
 * main - print the number of arguments in program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Accept 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
