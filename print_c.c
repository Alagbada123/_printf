#include "main.h"

/**
 * print_c - Prints a character
 * @val: argument
 * Return: integer
 */

int print_c(va_list val)
{
	char r;

	r = va_arg(val, int);
	_putchar(r);
	return (1);
}
