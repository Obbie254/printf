#include "main.h"
/**
 * print_buffer - fxn print input string
 * @buffer: char array
 * @buff_ind: string length
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	{
		for (int i = 0; i < *buff_ind; i++)
		{
			_putchar(buffer[i]);
		}
	}
	*buff_ind = 0;
}
