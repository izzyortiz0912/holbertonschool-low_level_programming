#include "main.h"

/**
* print_most_numbers - Prints numbers from 0 to 9, except 2 and 4.
*Description: Uses _putchar to print all digits from 0–9,
* skipping the numbers 2 and 4, followed by a new line.
*/
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar(10);
}
