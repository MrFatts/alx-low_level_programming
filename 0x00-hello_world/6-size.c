#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on.
 * Return: the size of every char type should be the output
 */
int main(void)
{
	printf("The file size of a char is %lu byte and nothing more\n", sizeof(char));
	printf("The file size of an int is %lu bytes and nothing less\n", sizeof(int));
	printf("The file size of a float is %lu bytes without mistake\n", sizeof(float));
	printf("The file size of a double is %lu bytes and thats final\n", sizeof(double));
	printf("The file size of a long double is %lu bytes and that's on period\n", sizeof(long double));
	return (0);
}
