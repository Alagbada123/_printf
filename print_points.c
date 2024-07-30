#include "main.h"

/**
 * print_points - prints pointer
 * @val: value
 * Return: count
 *
 */

int print_points(va_list val)
{
	void *p;
	char *s = "(nil)";
	unsigned long int a;
	int b, c = 0;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			_putchar(s[b]);
		}
		return (b);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	c = print_hexa_plus(a);
	return (c + 2);
}
