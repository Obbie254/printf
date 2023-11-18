#include "main.h"
/**
 * print_integer - fxn print integers
 * @value: int to be printed
 */
int print_integer(int value)
{
	char buffer[32]; // Buffer to store the string representation
	int printed = 0; // Counter for the number of characters printed
	// Handle the case of negative numbers
	if (value < 0)
	{
		_putchar('-');
		printed++;
		value = -value;
	}
	// Convert each digit of the integer to a character
	int i = 0;
	do
	{
		buffer[i++] = '0' + (value % 10);
		value /= 10;
		printed++;
	} while (value > 0);
	// Print the characters in reverse order to get the correct representation
	for (int j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
	return printed;
}
