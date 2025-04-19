#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9.
 *
 * Description: This function prints the digits 0 through 9,
 * followed by a new line.
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
