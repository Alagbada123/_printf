#include "main.h"
/**
 * print_hexa_plus - prints the integer in octal form
 * @num: argument
 * @plus: flag to indicate if the plus flag is set
 * @space: flag to indicate if the space flag is set
 * @hash: flag to indicate if the hash flag is set
 * Return: count
 */

int print_hexa_plus(unsigned long int num, int plus, int space, int hash)
{
	long int a;
	long int count = 0;
	long int *array;
	unsigned long int tempo = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(sizeof(long int) * count);

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
