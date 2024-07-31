#include "main.h"
/**
 * print_HEXA_PLUS - prints the integer in octal form
 * @num: numbers
 * @plus: flag to indicate if the plus flag is set
 * @space: flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 * Return: count
 */

int print_HEXA_PLUS(unsigned int num, int plus, int space, int hash)
{
	int a, count = 0;
	int *array;
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
			array[a] = array[a] + 7;
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}
