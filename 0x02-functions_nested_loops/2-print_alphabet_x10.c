#include "main.h"
/**
 * print_alphabet_x10 - print the lowercase alphabets 10 times
 * Description:use for loop to do 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
for (i = 1; i <= 10; i++)
{
for (int j = 97; j <= 122; j++)
{
_putchar(j);
}
_putchar("\n");
}
_putchar("\n");
}