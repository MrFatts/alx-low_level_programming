#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on.
 * Return: the size of every char type should be the output
 */
int main(void)
{
	printf("size of a char: %lu byte\(s\)\n", sizeof(char));
	printf("size of an int: %lu byte\(s\)\n", sizeof(int));
	printf("size of a float: %lu byte\(s\)\n", sizeof(float));
	printf("size of a double: %lu byte\(s\)\n", sizeof(double));
	printf("size of a long double: %lu byte\(s\)\n", sizeof(long double));
	return (0);
}
