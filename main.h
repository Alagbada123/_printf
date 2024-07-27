#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val); 
int _strlenc(const char *str);
int _strlen(char *str);
int print_37(void);
int print_dec(va_list args);
int print_int(va_list args);
int print_bin(va_list val);
int print_unsign(va_list args);
int print_octal(va_list val);
int print_hexa(va_list val);
int print_HEXA(va_list val);
int print_HEXA_PLUS(unsigned int num);
int print_Sstring(va_list val);
int print_points(va_list val);
int print_hexa_plus(unsigned long int num);
int print_Reverse(va_list val);
int print_Rot13(va_list val);


#endif
