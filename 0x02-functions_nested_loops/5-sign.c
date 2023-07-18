#include <stdio.h>
#include "main.h"
/**
 * print_sign - print the sign of number
 * @n: int value to be checked
 * Description: show if it's negative/positive or zero
 * Return: int  value
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
putchar('+');
}
else if (n == 0)
{
return (0);
putchar('0');
}
else
{
return (-1);
putchar('-');
}
}
