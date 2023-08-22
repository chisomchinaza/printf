#include "main.h"

/*************************PRINT CHAR*************************/

/**
 *print_char- Prints a char
 *@tyoes; lists of argument
 *@buffer: Buffer array to handle prints
 *@flags: calculates active flags
 *@width: Widyh
 *@precision: Precision specification
 */
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c =va_arg(types, int);

	return (handle_write_char(c, buffer, flag, width, precision, size));
}
/************************ PRINT A STRING *************************/
/**
 * print_string: Prints a string
 * Return number of chars printed
 */
int print_string(va_list typer,char buffer[],
		int flags, int width, int precision, int size)
{
	int lenght= 0, i;
	char *str = va_arg(types, char*);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if(str == NULL)
	{
		str ="(null)";
		if (precision >=6)
			str ="  ";
	}

	while(str[lenght] != '\0')
		lenght ++;

	if(precision >= 0 && precision < lenght)
		lenght = precision;

	if (width > lenght)
	{
		if (flags & F_MINUS)
		{
			write(1,&str[0], lenght);
			for (i = width - length; i > 0;i--)
				write(1," ", 1);
			return (width);
		}
		else
		{
			for(i = width - lenght; i > 0; i--)
				write(1," ",1);
			write(1, &str[0], lenght);
			return (width);
		}
	}

	return (write(1, str, lenght));
}
/*************************Print percent sigh*************************/
/**
 * print_percentage - Prints a percentage sign
 * Return:Numbers of char printed
 */
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(presicion);
	UNUSED(size);
	return(write(1,"%%", 1));
}
/*************************Print int*************************/
/**
 * print_int - Print int
 * Return: Number of chars printed
 */
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int suze)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(types, long int);
	unsigned long int num;
	
	n = convert_size_number(n, size);
	
	if (n ==0)
		buffer[i--] ='0';
	
	buffer[BUFF_SIZE*
