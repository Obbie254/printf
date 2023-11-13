#include "main.h"

/**
 * str_len - fxn gets string length
 * @s: string input
 * Return: string length
 */
int str_len(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++)
		s++;
	return (length);
}
