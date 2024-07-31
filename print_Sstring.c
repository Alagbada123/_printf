#include "main.h"
/**
 * print_Sstring - prints strings exclusively
 * @val: value
 * @plus: flag to indicate if the plus flag is set
 * @space:flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 * Return: the number of characters that was printed
 *
 */


int print_Sstring(va_list val, int plus, int space, int hash)
{
	char *s;
	int a, len = 0;
	int tp;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] < 32 || s[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			tp = s[a];
			if (tp < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEXA_PLUS(tp);
		}
		else
		{
			_putchar(s[a]);
			len++;
		}
	}
	return (len);
}
