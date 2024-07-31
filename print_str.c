#include "main.h"

/**
 * print_string - print a string.
 * @val: argument.
 * @plus: flag to indicate if the plus flag is set
 * @space: flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 *
 * Description: This function parses the format string starting at the
 * current position (pointed to by i) to identify any flags (+, space, #).
 * It sets the corresponding flag variables to 1 if the flag is present
 * and advances the current position in the format string.
 * Return: the length of the string
 */

int print_string(va_list val, int plus, int space, int hash)
{
	char *str;
	int i, len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}

	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
