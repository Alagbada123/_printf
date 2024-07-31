#include "main.h"

/**
 * print_reverse - prints a string in reverse form
 * @args: print argument
 * @plus: flag to indicate if the plus flag is set
 * @space: flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 *
 * Return: The number of characters printed
 *
 */

int print_reverse(va_list args, int plus, int space, int hash)
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
