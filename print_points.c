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
	long int b;
	int a, c;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (a = 0; s[a] != '\0'; a++)
		{
			_putchar(s[a]);
		}
		return (a);
	}
	b = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	c = print_hexa_plus(b);
	return (c + 2);
}
