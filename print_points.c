#include "main.h"

/**
 * print_points - prints pointer
 * @val: value
 * @plus: flag to indicate if the plus flag is set
 * @space:flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 * Return: count
 *
 */

int print_points(va_list val, int plus, int space, int hash)
{
	void *p;
	char *s = "(nil)";
	unsigned long int a;
	int b, c = 0;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		while (s[b] != '\0')
		{
			_putchar(s[b]);
			b++;
		}
		return (b);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	c = print_hexa_plus(a);
	return (c + 2);
}
