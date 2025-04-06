#include <stdio.h>
/**
 * main - Entry point. A C program that prints exactly with proper grammar,
 * but the outcome is a piece of art,, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int i;
double d;
char c;
long int e;
long long int f;
float g;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(g));
return (0);
}
