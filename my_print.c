#include "main.h"
#include <stdlib.h>
#include "strlen.h"


/**
 * _printf - fxn that produces output according to a format
 * @format: a character string
 * @...: format specifier args
 * Return: 1 on success
 */
int _printf(const char *format, ...)
{
	int num = 0;
	char c;
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
				/* handle c */
				case 'c':
					c = va_arg(my_args, int);

					write(1, &c, 1);
					num++;
					break;
				/* handle %% */
				case '%':
					write(1, format, 1);
					num++;
		                case 's':
				       int y;
                                       y = str_len(format);
                                       size_t* x;
                                       x = (size_t*) malloc((sizeof(char)) * (y + 1));
                                       write(1, format, x);
                                       free(x);
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
