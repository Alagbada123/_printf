#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - converts for printf
 * @id: type char pointer of the specifier
 * @f: function for the conversion specifier
 *
 * struct flag - Structure to hold flag character and its corresponding value
 * @flag: The flag character (e.g., '+', ' ', '#')
 * @value: Pointer to the integer value representing the flag's presence
 *
 * Description: This function parses the format string starting at the
 * current position (pointed to by i) to identify any flags (+, space, #).
 * It sets the corresponding flag variables to 1 if the flag is present
 * and advances the current position in the format string.
 */

#define plus 1
#define space 2
#define hash 4
#define zero 8
#define negative 16
#define plus (flags & 1)
#define space ((flags >> 1) & 1)
#define hash ((flags >> 2) & 1)
#define zero ((flags >> 3) & 1)
#define negative ((flags >> 4) & 1)


typedef struct format
{
	char *id;
	int (*f)();
} match;

/* Define the flag_f structure */
typedef struct flag
{
	char flag;
	int *value;
} flag_f;


int _putchar(char c);
int _printf(const char *format, ...);
<<<<<<< HEAD
int printf_char(va_list val);
int print_string(va_list val);
int _strlenc(const char *str);
int _strlen(char *str);
int print_37(void);
int print_dec(va_list args);
int print_int(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_hexa(va_list val);
int print_HEXA(va_list val);
int print_HEXA_PLUS(unsigned int num);
int print_Sstring(va_list val);
int print_points(va_list val);
int print_hexa_plus(unsigned long int num);
int print_Reverse(va_list args);
int print_Rot13(va_list args);

/* Function prototypes */
=======
int printf_char(va_list val, int plus_flag, int space_flag, int hash_flag);
int print_string(va_list val, int plus_flag, int space_flag, int hash_flag);
int _strlenc(const char *str, int plus_flag, int space_flag, int hash_flag);
int _strlen(char *str, int plus_flag, int space_flag, int hash_flag);
int print_37(void, int plus_flag, int space_flag, int hash_flag);
int print_dec(va_list args, int plus_flag, int space_flag, int hash_flag);
int print_int(va_list args, int plus_flag, int space_flag, int hash_flag);
int print_bin(va_list val, int plus_flag, int space_flag, int hash_flag);
int print_unsigned(va_list args, int plus_flag, int space_flag, int hash_flag);
int print_octal(va_list val, int plus_flag, int space_flag, int hash_flag);
int print_hexa(va_list val, int plus_flag, int space_flag, int hash_flag);
int print_HEXA(va_list val, int plus_flag, int space_flag, int hash_flag);
int print_HEXA_PLUS(unsigned int num, int plus_flag, int space_flag, int hash_flag);
int print_Sstring(va_list val, int plus_flag, int space_flag, int hash_flag);
int print_points(va_list val, int plus_flag, int space_flag, int hash_flag);
int print_hexa_plus(unsigned long int num, int plus_flag, int space_flag, int hash_flag);
int print_reverse(va_list args, int plus_flag, int space_flag, int hash_flag);
int print_rot13(va_list args, int plus_flag, int space_flag, int hash_flag);
void handle_flags(const char*format, int *i, int *plus_flag, int *space_flag, int *hash_flag);
/* to handle others */
>>>>>>> 7c3f7c300251b5d7d078db8b5072f77d4ebfb802

void handle_flags(const char *format, int *i,
		int *plus, int *space, int *hash);
unsigned char handle_length(const char *modifier, char *index);
int handle_width(va_list args, const char *modifier, char *index);
int handle_precision(va_list args, const char *modifier, char *index);


#endif
