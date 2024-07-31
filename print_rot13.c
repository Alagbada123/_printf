#include "main.h"
/**
 * print_rot13 - converts to Rot13
 * @args: printf arguments
 * @plus: flag to indicate if the plus flag is set
 * @space: flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 * Return: count
 *
 */

int print_rot13(va_list args, int plus, int space, int hash)
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
				break;
			}
		}
		if (!u[b])
		{
			_putchar(s[a]);
			count++;
		}
	}
	return (count);
}
