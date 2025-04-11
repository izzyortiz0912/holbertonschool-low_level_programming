#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
*
* Return: Always 0 (indicating success)
*
*/

int main(void)
{

int n;

for (n = 0; n <= 9; n++)
{
	putchar(n + '0');  /* convert number to character */
	if (n != 9) /* if it's not the last number */

	{
	putchar(',');
	putchar(' ');
	}
}

	putchar('\n');
	return (0);
}
