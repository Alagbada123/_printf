#include "main.h"
/**
 * print_hexa - prints the integer in octal form
 * @val: argument
 * Return: count
 */

int print_hexa(va_list val)
{
	int a, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tempo = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (a = 0; a < count; a++)
	{
		array[a] = tempo % 16;
		tempo /= 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}
