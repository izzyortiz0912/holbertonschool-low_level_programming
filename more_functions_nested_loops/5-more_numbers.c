#include "main.h"
/**
* more_numbers - Prints numbers from 0 to 14, ten times.
*
* Description: Each line prints numbers from 0 to 14,
* repeated 10 times total, followed by a new line.
*/

void more_numbers(void)
{
int a, b;
	for (b = 0; b <= 9; b++)
	{
	for (a = 0; a <= 14; a++)
{
	if (a > 9)
		_putchar(49);
	_putchar ((a % 10) + 48);
	if (a == 14)
	_putchar('\n');
}
	}


}
