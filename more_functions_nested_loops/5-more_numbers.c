#include "main.h"

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
