#include "main.h"

/**
 * _printf - Printf function
 * @format: character string
 * Return: returns the number of characters printed
 */

int _printf(const char *format, ...)
{
	int char_print = 0;
	va_list args;

	if (format == NULL)
		return -1;
	
	va_start(args, format);
	
	while (*format)
	{
		if (*format != '%')
			/*if format is not %*/
		{
			write(1, format, 1);
			/*write char to the standard output*/
			char_print++;
		}
		else /* if format is %*/
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%') /* Gives solution for %*/
			{
				/*Handles (double 's')*/
				write(1, format,1);
				char_print++;
			}
			else if (*format == 'c')
			{
				/*Handles '%c' (character)*/
				char c = va_arg(args, int);
				write(1, &c, 1);
				char_print++;
			}
			else if (*format == 's')
			{
				/*Handles 's' which is a string*/
				char *str = va_arg(args, char*);
				int str_len = 0;

				/*Calculate the length of the string using str_len*/
				while (str[str_len] != '\0')
					str_len++;
				/*Write the string to standard output*/
				write(1, str, str_len);
				char_print += str_len;
			}
		}

		format++;
	}

	va_end(args);

	return char_print;
}

/**
 * _printf - Prints thw char_print contents
 */

int main(){
	_printf("Hello ALX!\n");
	_printf("%c\n", 'a');
	_printf("%s\n", "String");
	_printf("%%\n");
	return 0;
}
