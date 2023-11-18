#include "main.h"
/**
 * _printf - function used
 * @format: character to be printed/checked
 * @... : variadic function variables declaration
 * Return: character
 */

int _printf(const char *format, ...)
{
	check y[] = {{"%c", print_character}, {"%s", print_string}, {"%%", print_percent}, {"%i", print_numbers}, {"%d", print_numbers}};
	va_list my_args;
	int a = 0, len = 0, b;

	va_start(my_args, format);
	if (format == NULL)
		return (-1);

start:
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (y[b].id[0] == format[a] && y[b].id[1] == format[a + 1])
			{
				len = len + y[b].f(my_args);
				a = a + 2;
				goto start;
			}
			b--;
		}
		write(1, format[a], 1);
		a++;
		len++;
	}
	va_end(my_args);
	return (len);
}
