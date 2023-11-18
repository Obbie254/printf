#include "main.h"

/**
 * str_len - fxn gets string length
 * @s: string input
 * Return: string length
 */

int str_len(char *s)
{
	int i = 0;

        while (s[i] != '\0')
        {
                
                i++;

        }
	return (i);
}

int strlen_c(const char *s)
{
	int d;
	
	d = 0;
	while(s[d] != 0)
	{
	
		d++;
	}
	return (d);
}
