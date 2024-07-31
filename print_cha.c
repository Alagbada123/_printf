#include "main.h"

/**
 * printf_char - prints a char.
 * @val: argument.
 * @plus: flag to indicate if the plus flag is set
 * @space: flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 * Description: This function parses the format string starting at the
 * current position (pointed to by i) to identify any flags (+, space, #).
 * It sets the corresponding flag variables to 1 if the flag is present
 * and advances the current position in the format string.
 * Return: 1
 */
int printf_char(va_list val, int plus, int space, int hash)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
