#ifndef MAIN_H
#define MAIN_H
#include  <stdio.h>
#include <limits.h>
#include <stdarg.h>
<<<<<<< HEAD
#include <stdio.h>
#include <unistd.h>

#define USUED(x) void(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/*
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};
=======
>>>>>>> ee5727a8b91b7f569b8a2f54c52f73108b807085

int _putchar(char c);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);
void print_binary(unsigned int n, unsigned int *printed);
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_STR(va_list arg);

/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
<<<<<<< HEAD
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
		var_list list, char buffer[], int flags, int width, int precision, int size);

/****************FUNCTION***************/

/* Functions to print chars and strings */
int print_char(var_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(var_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(vsr_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_int(var_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_unsigned(var_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_octa(var_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexadecimal(var_list types, char buffer[],
		int flags, int width, int precision, int sie);
int;

int print_hexa(var_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function print non printable character */
int print_non_printable(var_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function to print memory address */
int print_pointer(var_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Functions to handles other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, var_list list);
int get_precision(const char *format, int *i, var_list list);
int get_size(const char *format, int *i);

/* Function to print string in reverse */
int print_reverse(var_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function to print a string in rot 13 */
int print_rot13string(var_list types, char buffer[],
		int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_pointer(char buffer[], int ind, int lenght,
		int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[],
		int flags, int width, int precision, int size);

/******************UTILS*****************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_ unsgnd(unsigned long int num, int size);
=======
typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;
>>>>>>> ee5727a8b91b7f569b8a2f54c52f73108b807085

#endif
