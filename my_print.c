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
	char c, *s, v, p;

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
					p = va_arg(my_args, int);
					write(1, &p, 1);
					num++;
					break;
				case 's':
					s = va_arg(my_args, char*);
					len = 0;
					write(1, &s, str_len(s));
					num += len;
					break;
				default:
					v = va_arg(my_args, int);
					write(1, &v, 1);
					num++;
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
