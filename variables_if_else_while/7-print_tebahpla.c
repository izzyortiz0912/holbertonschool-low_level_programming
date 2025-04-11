#include <stdio.h>
/**
* main - Prints the alphabet in reverse
* Descripiton: This Function prints all of the letter in the
* alphabet in reverse.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char character;

	/*It loops through*/
	for (character = 'z'; character >= 'a'; character--)
	{
		putchar (character); /*It prints each character*/
	}
	putchar ('\n'); /*It adds a new line */

	return (0);
}
