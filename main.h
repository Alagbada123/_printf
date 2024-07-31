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
 */
#define plus 1
#define space 2
#define hash 4
#define zero 8
#define negative 16
#define plus_flag (flags & 1)
#define space_flag ((flags >> 1) & 1)
#define hash_flag ((flags >> 2) & 1)
#define zero_flag ((flags >> 3) & 1)
#define negative_flag ((flags >> 4) & 1)


typedef struct format
{
	char *id;
	int (*f)();
} match;


typedef struct flag_f
{
	unsigned char flag;
	unsigned char value;
} flag_f;


int _putchar(char c);
int _printf(const char *format, ...);
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

unsigned char handle_flags(const char *flags, char *index);
unsigned char handle_length(const char *modifier, char *index);
int handle_width(va_list args, const char *modifier, char *index);
int handle_precision(va_list args, const char *modifier, char *index);


#endif
