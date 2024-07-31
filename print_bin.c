#include "main.h"
/**
 * print_bin - conversion to binary
 * @plus_flag: flag to indicate if the plus flag is set
 * @space_flag: flag to indicate if the space flag is set
 * @hash_flag: flag to indicate if the hash flag is set
 * @val: argument
 *
 * Return: integer
 *
 */

int print_bin(va_list val, int plus_flag, int space_flag, int hash_flag)
{
	int flag = 0;
	int count = 0;
	int a, b = 1, c;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int d;

	for (a = 0; a < 32; a++)
	{
		d = ((b << (31 - a)) & num);
		if (d >> (31 - a))
			flag = 1;
		if (flag)
		{
			c = d >> (31 - a);
			_putchar(c + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
