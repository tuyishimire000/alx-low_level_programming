#include "main.h"
/**
 * print_alphabet - print alphabets in lowercase
 * Description: using ASCII values that range from 97-122
 * Return:void
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
