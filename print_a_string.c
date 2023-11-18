#include "main.h"
/**
 * print_string - function used
 * @my_args: list
 * Return: len
 */

int print_string(va_list my_args)
{
	char *s;
	int len = 0, i;

	s = va_arg(my_args, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = str_len(s);
		while (i < len)
		{
			write(1, (&s[i]), 1);
			i++;
		}
		return (len);
	}
	else
	{
		len = str_len(s);
		while (i < len)
		{
			write(1, (&s[i]), 1);
                        i++;
		}
                return (len);
	}
}
