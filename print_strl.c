#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: pointer of string
 * @plus: flag to indicate if the plus flag is set
 * @space:flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 * Return: integer
 *
 */
int _strlen(char *str, int plus, int space, int hash)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
/**
 * _strlenc - Strlen function applied to constant char pointer string
 * @str: pointer of char
 * @plus: flag to indicate if the plus flag is set
 * @space: flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 * Return: integer
 */
int _strlenc(const char *str, int plus, int hash, int space)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
