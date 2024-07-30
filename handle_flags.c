#include "main.h"

/*
 * handle_flags - Parses and sets flags for _printf
 * @flag: pointer to a potential string of flags
 * @index: index counter for the original format string
 * Return: if flag characters are matched - a corresponding value
 *		Otherwise - 0
 */

unsigned char handle_flags(const char *flag, char *index)
{
	int m, n;
	unsigned char ret = 0;
	flag_f flags[] = {
		{'+', plus},
		{' ', space},
		{'#', hash},
		{'0', zero},
		{'-', negative},
		{0, 0}
	};

	for (m = 0; flag[m]; m++)
	{
		for (n = 0; flags[n].flag != 0; n++)
		{
			if (flag[m] == flags[n].flag)
			{
				(*index)++;
				if (ret == 0)
					ret = flags[n].value;

				else
					ret |= flags[n].value;
				break;
			}
		}

		if (flags[n].value == 0)
			break;
	}

	return (ret);
}
