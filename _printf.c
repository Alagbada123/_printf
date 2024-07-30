#include "main.h"

/**
 * _printf - a custom made printf function
 * @format: format string containing the characters and the specifiers
 * Return: the length of the formatted output string
 */

int _printf(const char * const format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%str", print_string}, {"%%", print_37},
		{"%d", print_dec}, {"%i", print_int}, {"%r", print_Reverse},
		{"%R", print_Rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hexa}, {"%X", print_HEXA},
		{"%S", print_Sstring}, {"%p", print_points}
	};

	va_list args;
		int a = 0, b, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Step1:
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (m[b].id[0] == format[a] && m[b].id[1] == format[a + 1])
			{
				len += m[b].f(args);

				a = a + 2;
				goto Step1;
			}
			b--;
		}
		_putchar(format[a]);
		len++;
		a++;
	}
	va_end(args);
	return (len);
}
