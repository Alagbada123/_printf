#include "main.h"
/**
 * print_octal - prints the integer in octal form
 * @val: argument
 * @plus_flag: flag to indicate if the plus flag is set
 * @space_flag: flag to indicate if the space flag is set
 * @hash_flag: flag to indicate if the hash flag is set
 * Return: number of character printed
 */

int print_octal(va_list val, int plus_flag, int space_flag, int hash_flag)
{
	int a;
	int count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tempo = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (a = 0; a < count; a++)
	{
		array[a] = tempo % 8;
		tempo /= 8;
	}
	for (a = count - 1; a >= 0; a--)
		_putchar(array[a] + '0');
	free(array);
	return (count);
}
