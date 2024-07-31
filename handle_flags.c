#include "main.h"
/**
 * handle_flags - Parses and sets flags for _printf
 * @flag: Pointer to a string of potential flags
 * @index: Index counter for the original format string
 *
 * Description: This function iterates over a string of potential flags,
 *              checks each character against known flag characters, and
 *              sets the appropriate flags for the _printf function. The
 *              index counter is incremented for each matched flag.
 *
 * Return: The combined value of matched flags. If no flags are matched,
 *         the function returns 0.
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
