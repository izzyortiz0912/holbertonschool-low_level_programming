#include <stdio.h>

/*
* 6-print_numberz.c - Program that prints all single-digit numbers of
*
* base 10 starting from 0.
*
* This program uses the putchar function to print numbers
*
* without using printf or puts.
*/

/**
* main - Prints all single-digit numbers of base 10 starting from 0.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int numberz;

for (numberz = 0; numberz < 10; numberz++)

{
putchar(numberz + 48);
}
putchar (10);

return (0);
}
