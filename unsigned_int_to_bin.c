#include "main.h"
/**
 * unsigned_int_to_bin - function used
 *
 *Return: c
 */

#include <stdarg.h>
#include <unistd.h>

int unsigned_int_to_bin(va_list my_args)
{
	int x = 0, y = 1, a, c = 0, place = 0;
	unsigned int v, num = 0;
	num = va_arg(my_args, unsigned int);

	while (x < 32)
	{
		v = ((y << (32 - x)) & num);
		if (v >> (31 -x))
		place = 1;
		if (place)
		{
			a = v >> (31 - x);
			write(1, (&a + 48), 2);
			c++;
			x++;
		}
	}
	if (c == 0)
	{
		c++;
		write(1, "0", 1);
	}
	return (c);
}
