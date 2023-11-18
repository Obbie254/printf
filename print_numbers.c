#include "main.h"
/**
 * print_numbers - function used for case d or i
 * @my_args: list
 * Return: x
 */
int print_numbers(va_list my_args)
{
	int a, b, y, e, f, x;

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
			f = f - ((y) * (e));
			e = e / 10;
			x++;
		}
	}
	return (x);
}
