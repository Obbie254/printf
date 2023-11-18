#include "main.h"
/**
 * print_character - function used
 * @my_args: list
 * Return: 0 on success
 */

int print_character(va_list my_args)
{
	char c;

	c = va_arg(my_args, int);
	write(1, &c, 1);
	return (0);
}
