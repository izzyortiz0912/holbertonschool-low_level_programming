#include <stdio.h>

/**
* main - Prints the alphabet in lowercase and uppercase.
*
* Return: Always 0 (Success)
*/

int main(void)
{
char word;

/* Print lowercase letters */
for (word = 'a'; word <= 'z'; word++)
{
putchar(word);
}

/* Print uppercase letters */
for (word = 'A'; word <= 'Z'; word++)
{
putchar(word);
}

putchar('\n'); /* Corrected typo here */

return (0);
}
