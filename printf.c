#include "main.h"

/**
 * _printf - does what printf would do
 * @format: this is an identifier to look for a something
 * Return: integer
 *
 */


int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37},
		{"%d", print_dec}, {"%i", print_int}, {"%r", print_Reverse},
		{"%R", print_Rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hexa}, {"%X", print_HEXA},
		{"%S", print_Sstring}, {"%p", print_pointer}
	};

	va_list args;
	int a = 0, len = 0;
	int b;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (err);
Step1:
	while (format[a] = '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (m[b].id[0] == format[a] && m[j].id[1] == format[a + 1])
				;
			{
				len = len + m[b].f(args);
				a = a + 2;
				goto Step1;
			}
			j--;
		}
		_putchar(format[a]);
		a++;
		len++;
	}
	va_end(args);
	return (len);
}
