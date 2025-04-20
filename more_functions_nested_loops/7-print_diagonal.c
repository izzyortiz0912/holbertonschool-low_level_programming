#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: number of times the character '\' should be printed
 *
 * Description: Each line has an increasing number of spaces before '\'.
 * If n <= 0, only a newline is printed.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
