#include "main.h"

/**
 * print_Reverse - prints a string in reverse form
 * @args: print argument
 *
 * Return: The string
 *
 */

int print_Reverse(va_list args)
{
	char *s = va_arg(args, char*);
	int a;
	int b = 0;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}
