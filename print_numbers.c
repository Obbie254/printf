#include "main.h"
/*
 * print_numbers - function used
 * @my_args: list
 * Return: x
 */
int print_numbers(va_list my_args)
{
	int a, b, y, e, f, x;
<<<<<<< HEAD
	int num = 0, len = 0;
	char *s;

	a = va_arg(my_args, int);
	b = a % 10;
	f = a / 10;
	e = 1;
	x = 1;
	va_start(my_args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
=======

	a = va_arg(my_args, int);
	b = a % 10, f = a / 10;
	e = 1, x = 1;

	if (a < 0)
	{
		write(1, "-", 1);
		f = -f;
		a = -a;
		b = -b;
		x++;
	}
	if (f > 0)
>>>>>>> 33c8feb135d22e93b3dbc6b1da5f70f62c438f55
	{
		while (f / 10 != 0)
		{
<<<<<<< HEAD
			switch (*++format)
			{
				case 's':
					s = va_arg(my_args, char*);
					while (s[len] != '\0')
						len++;
					write(1, s, len);
					num += len;
					break;
				case 'd' || 'i':
					if (a < 0)
					{
						write(1, "-", 1);
						f = -f;
						a = -a;
						b = -b;
						x++;
					}
					if (f > 0)
					{
						while (f / 10 != 0)
						{
							e = e * 10;
							f++;
						}
						f = a;
						while (e > 0)
						{
							y = f / e;
							write(1, (&y + '0'), 1);
							f = f - ((y)*(e));
							e = e / 10;
							x++;
						}
					}
					write(1, (&b + '0'), 1);
			}
=======
		e = e * 10;
		f++;
>>>>>>> 33c8feb135d22e93b3dbc6b1da5f70f62c438f55
		}
		f = a;
		while (e > 0)
		{
			y = f / e;
			write(1, (&y + '0'), 1);
			f = f - ((y)*(e));
			e = e / 10;
			x++;
		}
	
	}
	return (x);
}
