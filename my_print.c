#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - fxn that produces output according to a format
 * @format: a character string
 * @...: format specifier args
 * Return: 1 on success
 */
int _printf(const char *format, ...)
{
	int num = 0, len;
	char c, *s;

	va_list my_args;
	va_start(my_args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*++format)
			{
				case 'c':
					c = va_arg(my_args, int);
					write(1, &c, 1);
					num++;
					break;
				case '%':
					write(1, format, 1);
					num++;
					break;
				case 's':
					s = va_arg(my_args, char*);
					len = 0;
					while (s[len] != '\0')
						len++;
					write(1, s, len);
					num += len;
					break;
			}
		}
		else
		{
			write(1, format, 1);
			num++;
		}
		format++;
	}
	va_end(my_args);
	return (num);
}
