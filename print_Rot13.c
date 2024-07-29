#include "main.h"
/**
 * print_Rot13 - converts to Rot13
 * @args: printf arguments
 * Return: count
 *
 */

int print_Rot13(va_list args)
{
	int a, b, count = 0;
	int c = 0;
	char *s = va_arg(args, char*);
	char u[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char v[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		c = 0;
		for (b = 0; u[b] && !c; b++)
		{
			if (s[a] == u[b])
			{
				_putchar(v[b]);
				count++;
				c = 1;
			}
		}
	}
	if (!c)
	{
		_putchar(s[a]);
		count++;
	}
	return (count);
}
