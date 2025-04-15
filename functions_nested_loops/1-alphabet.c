#include "main.h"

/**
* print_alphabet - Prints the lowercase alphabet followed by a new line.
*
* Return: void
*/

void print_alphabet(void)

{
char character;

for (character = 'a'; character <= 'z'; character++)

{
_putchar(character);
}
_putchar('\n');
}
