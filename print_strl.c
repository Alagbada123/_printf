#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: pointer of string
 * Return: a
 *
 */
int _strlen(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
/**
 * _strlenc - Strlen function applied to constant char pointer string
 * @str: pointer of char
 * Return: a
 */
int _strlenc(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
