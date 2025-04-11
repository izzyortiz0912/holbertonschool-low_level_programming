#include <stdio.h>

/**
* A program that prints all possible combinations of single-digit numbers.
*
* Return: Always 0 (indicating success)
*
*/

int main(void)

{

int n;
for (n = 48; n <= 57; n++)
putchar (n);
if (n != 57) /* if n is not '9' */
{
putchar (',');
putchar (' '); /* code */
}
putchar('\n');
return (0);
}
