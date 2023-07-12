#include "main.h"
/**
 * _strlen - counts the lenght of string
 * @str: pointer
 * Return: returns len
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
	;

	return (len);

}

/**
 * str_concat - concatnates two strings
 * @s1: pointer
 * @s2: pointer
 *
 * Return: returns ptr
 */


char *str_concat(char *s1, char *s2)
{
	int len_1, len_2, len, i, j;
	char *ptr;

	if (!(s1))
		len_1 = 0;
	else
		len_1 = _strlen(s1);
	if (!(s2))
		len_2 = 0;
	else
		len_2 = _strlen(s2);

	len = len_1 + len_2 + 1;

	ptr = malloc(sizeof(char) * len);
	if (!(ptr))
		return (NULL);

	for (i = 0; i < len_1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len_2; j++, i++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
