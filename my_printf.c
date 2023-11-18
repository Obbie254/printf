#include "main.h"

char buffer[BUFF_SIZE];
int buff_ind = 0;
int print_percent(int, int);
/**
 * _printf - fxn that functions like printf
 * @format: input string
 * @...: args val
 * Return: printed xters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int printed = 0;
	
	va_start(args, format);
	while (*format) // Iterate over each character in the format string
	{
		if (*format == '%') // Check for the start of a conversion specifier
		{
			format++; // Move to the next character after '%'
			if (*format == '%') // Case: '%%'
			{
				buffer[buff_ind++] = '%';
				if (buff_ind == BUFF_SIZE)
				{
					print_buffer(buffer, &buff_ind);
					count += buff_ind;
				}
			}
			else if (*format == 'c') // Case: '%c' prints a character
			{
				int ch = va_arg(args, int); // Fetch the next argument as int
				buffer[buff_ind++] = ch;
				if (buff_ind == BUFF_SIZE)
				{
					print_buffer(buffer, &buff_ind);
					count += buff_ind;
				}
			}
			else if (*format == 's') // Case: '%s' prints a string
			{
				char *str = va_arg(args, char *); // Fetch the next argument as char*
				while (*str) // Iterate over each character in the string
				{
					buffer[buff_ind++] = *str;
					str++;
					if (buff_ind == BUFF_SIZE)
					{
						print_buffer(buffer, &buff_ind);
						count += buff_ind;
					}
				}
			}
			else if (*format == 'd' || *format == 'i') // Case: '%d' or '%i' prints an integer
			{
				int value = va_arg(args, int);
				printed = print_integer(value);//calling print_int function
				count += printed;
			}
		}
		else // Case: Regular character, not a conversion specifier
		{
			buffer[buff_ind++] = *format;
			if (buff_ind == BUFF_SIZE)
			{
				print_buffer(buffer, &buff_ind);
				count += buff_ind;
			}
		}
		format++; // Move to the next character in the format string
	}
	print_buffer(buffer, &buff_ind);
	count += buff_ind;
	va_end(args); // Clean up the argument list
	return (count); // Return the number of characters printed
}
