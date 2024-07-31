#include "main.h"
/**
 * handle_flags - Parses and sets flags for _printf
 * @format: The format string
 * @i: Pointer to the current position in the format string
 * @plus: Pointer to the plus flag variable
 * @space: Pointer to the space flag variable
 * @hash: Pointer to the space flag variable
 * Description: This function parses the format string starting at the
 * current position (pointed to by i) to identify any flags (+, space, #).
 * It sets the corresponding flag variables to 1 if the flag is present
 * and advances the current position in the format string.
 */

void handle_flags(const char *format, int *i, int *plus,
		int *space, int hash)

unsigned char handle_flags(const char *flag, char *index)
{
	flag_f flags[] = {
		{'+', plus},
		{' ', space},
		{'#', hash},
		{0, NULL}
	};

	int n;

	while (format[*i])
	{
		int found_flag = 0;

		for (n = 0; flags[n].flag != 0; n++)
		{
			if (format[*i] == flags[n].flag)
			{
				*(flags[n].value) = 1;
				found_flag = 1;
					break;
			}
		}
		if (!found_flag)
			break;
		(*i)++;
	}
}
