#include <stdio.h>

/**
* main - Prints the alphabet in lower case.
*
* Description: This function prints all the lowercase letters of the alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{


char word;

/*Print the letters of the alphabet in lowercase*/
for (word = 'a'; word <= 'z'; word++)
{
putchar(word); /*Prints each letter*/
}
putchar('\n'); /*Adds a new line at the end */
return (0);
}
