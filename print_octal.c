#include "main.h"
/**
 * print_octal - prints the integer in octal form
 * @val: argument
 * Return: number of character printed
 */

int print_octal(va_list val)
{
	int a, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tempo = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (a = 0; a < count; a++)
	{
		array[a] = tempo % 8;
		tempo = tempo / 8;
	}
	for (a = count - 1; a >= 0; a--)
		_putchar(array[a] + '0');
	free(array);
	return (count);
}
