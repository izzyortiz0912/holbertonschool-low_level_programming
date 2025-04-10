#include <stdio.h>
/**
* main - Prints the alphabet in lowercase
* Descripiton: This Function prints all lowercase letters of the alphabet.
* except letter q and e
*
* Return: Always 0 (Success)
*/
int main(void)
{
char character;

character = 'a';
/*It loops through alphabet*/
while (character <= 'z')
{
putchar(character); /*It prints each character*/
	character++;

}

putchar('\n'); /*It adds a new line */
	return (0);
}
